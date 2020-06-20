#include "cache_set_kruger.h"
#include "log.h"
#include "stats.h"

// Implements LRU replacement (modified version to keep dirty blocks),
// optionally augmented with Query-Based Selection [Jaleel et al., MICRO'10]
// Implemented by: Kleber Kruger.

CacheSetKruger::CacheSetKruger(
    CacheBase::cache_t cache_type,
    UInt32 associativity, UInt32 blocksize, CacheSetInfoKruger *set_info, UInt8 num_attempts)
    : CacheSet(cache_type, associativity, blocksize), m_num_attempts(num_attempts), m_set_info(set_info)
{
    m_lru_bits = new UInt8[m_associativity];
    for (UInt32 i = 0; i < m_associativity; i++)
        m_lru_bits[i] = i;

    printf("CacheSetKruger created: %d | %d | %d | %d | %p \n", cache_type, associativity, blocksize, num_attempts, set_info);
}

CacheSetKruger::~CacheSetKruger()
{
    delete[] m_lru_bits;
}

UInt32
CacheSetKruger::getReplacementIndex(CacheCntlr *cntlr)
{
    // First try to find an invalid block
    for (UInt32 i = 0; i < m_associativity; i++)
    {
        if (!m_cache_block_info_array[i]->isValid())
        {
            // Mark our newly-inserted line as most-recently used
            printf("Encontrou bloco inválido em: %d\n", i);
            moveToMRU(i);
            return i;
        }
    }

    // Make m_num_attemps attempts at evicting the block at LRU position
    for (UInt8 attempt = 0; attempt < m_num_attempts; ++attempt)
    {
        printf("Tentando a %d vez...\n", attempt);
        UInt32 index = 0;
        UInt8 max_bits = 0;
        for (UInt32 i = 0; i < m_associativity; i++)
        {
            printf("m_lru_bits[i] = %d | max_bits = %d\n", m_lru_bits[i], max_bits);
            if (m_lru_bits[i] > max_bits && isValidReplacement(i))
            {
                printf("Entrei em if (m_lru_bits[i] > max_bits && isValidReplacement(i))\n");
                index = i;
                max_bits = m_lru_bits[i];
            }
        }
        LOG_ASSERT_ERROR(index < m_associativity, "Error Finding LRU bits");

        printf("attemp = %d | m_num_attemps = %d | cntrl = %p\n", attempt, m_num_attempts, cntlr);

        bool qbs_reject = false;
        if (attempt < m_num_attempts - 1)
        {
            LOG_ASSERT_ERROR(cntlr != NULL, "CacheCntlr == NULL, QBS can only be used when cntlr is passed in");
            printf("cntrl usado em %d\n", index);
            qbs_reject = cntlr->isInLowerLevelCache(m_cache_block_info_array[index]);
        }

        if (qbs_reject)
        {
            // Block is contained in lower-level cache, and we have more tries remaining.
            // Move this block to MRU and try again
            moveToMRU(index);
            cntlr->incrementQBSLookupCost();
            printf("IF qbs_reject: %d\n", index);
            continue;
        }
        else
        {
            // Mark our newly-inserted line as most-recently used
            moveToMRU(index);
            m_set_info->incrementAttempt(attempt);
            printf("ELSE qbs_reject: %d\n", index);
            return index;
        }
    }

    LOG_PRINT_ERROR("Should not reach here");
}

void CacheSetKruger::updateReplacementIndex(UInt32 accessed_index)
{
    m_set_info->increment(m_lru_bits[accessed_index]);
    moveToMRU(accessed_index);
}

void CacheSetKruger::moveToMRU(UInt32 accessed_index)
{
    for (UInt32 i = 0; i < m_associativity; i++)
    {
        if (m_lru_bits[i] < m_lru_bits[accessed_index])
            m_lru_bits[i]++;
    }
    m_lru_bits[accessed_index] = 0;
    printLRUBits(); // Modified by Kruger
}

void CacheSetKruger::printLRUBits()
{
    printf("Printing m_lru_bits:\n");
    for (UInt32 i = 0; i < m_associativity; i++)
        printf("%d ", m_lru_bits[i]);
    printf("\n");
}

CacheSetInfoKruger::CacheSetInfoKruger(String name, String cfgname, core_id_t core_id, UInt32 associativity, UInt8 num_attempts)
    : m_associativity(associativity), m_attempts(NULL)
{
    m_access = new UInt64[m_associativity];
    for (UInt32 i = 0; i < m_associativity; ++i)
    {
        m_access[i] = 0;
        registerStatsMetric(name, core_id, String("access-mru-") + itostr(i), &m_access[i]);
    }

    if (num_attempts > 1)
    {
        m_attempts = new UInt64[num_attempts];
        for (UInt32 i = 0; i < num_attempts; ++i)
        {
            m_attempts[i] = 0;
            registerStatsMetric(name, core_id, String("qbs-attempt-") + itostr(i), &m_attempts[i]);
        }
    }
};

CacheSetInfoKruger::~CacheSetInfoKruger()
{
    delete[] m_access;
    if (m_attempts)
        delete[] m_attempts;
}
