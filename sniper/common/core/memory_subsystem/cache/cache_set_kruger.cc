#include "cache_set_kruger.h"
#include "log.h"
#include "stats.h"

constexpr const char *const CacheSetKruger::states[];

CacheSetKruger::CacheSetKruger(
    CacheBase::cache_t cache_type,
    UInt32 associativity, UInt32 blocksize, CacheSetInfoLRU *set_info, UInt8 num_attempts)
    : CacheSet(cache_type, associativity, blocksize), m_num_attempts(num_attempts), m_set_info(set_info), m_access(0)
{
    m_lru_bits = new UInt8[m_associativity];
    for (UInt32 i = 0; i < m_associativity; i++)
        m_lru_bits[i] = i;
}

CacheSetKruger::~CacheSetKruger()
{
    delete[] m_lru_bits;
}

// UInt32
// CacheSetKruger::getReplacementIndex(CacheCntlr *cntlr)
// {
//     // First try to find an invalid block
//     for (UInt32 i = 0; i < m_associativity; i++)
//     {
//         if (!m_cache_block_info_array[i]->isValid())
//         {
//             // Mark our newly-inserted line as most-recently used
//             moveToMRU(i);
//             return i;
//         }
//     }

//     // Make m_num_attemps attempts at evicting the block at LRU position
//     // default m_num_attemps = 1
//     for (UInt8 attempt = 0; attempt < m_num_attempts; ++attempt)
//     {
//         UInt32 index = 0;
//         UInt8 max_bits = 0;
//         for (UInt32 i = 0; i < m_associativity; i++)
//         {
//             if (m_lru_bits[i] > max_bits && isValidReplacement(i))
//             {
//                 index = i;
//                 max_bits = m_lru_bits[i];
//             }
//         }
//         LOG_ASSERT_ERROR(index < m_associativity, "Error Finding LRU bits");

//         bool qbs_reject = false;
//         if (attempt < m_num_attempts - 1)
//         {
//             LOG_ASSERT_ERROR(cntlr != NULL, "CacheCntlr == NULL, QBS can only be used when cntlr is passed in");
//             qbs_reject = cntlr->isInLowerLevelCache(m_cache_block_info_array[index]);
//         }

//         // Only possible if in LRU_QBS mode
//         if (qbs_reject)
//         {
//             // Block is contained in lower-level cache, and we have more tries remaining.
//             // Move this block to MRU and try again
//             moveToMRU(index);
//             cntlr->incrementQBSLookupCost();
//             continue;
//         }
//         else
//         {
//             // Mark our newly-inserted line as most-recently used
//             moveToMRU(index);
//             m_set_info->incrementAttempt(attempt);
//             return index;
//         }
//     }

//     LOG_PRINT_ERROR("Should not reach here");
// }

// Valid only for KRUGER, not KRUGER_QBS
UInt32
CacheSetKruger::getReplacementIndex(CacheCntlr *cntlr)
{
    printf("\naccess number: %lu\n", ++m_access);
    printBlockStats();

    bool all_modified = true;
    UInt32 index = 0;

    // First try to find an invalid block
    for (UInt32 i = 0; i < m_associativity; i++)
    {
        if (!m_cache_block_info_array[i]->isValid())
        {
            // Mark our newly-inserted line as most-recently used
            moveToMRU(i);
            printBlockStats();
            printf("RETORNEI o bloco %s da posicao: %d\n", states[m_cache_block_info_array[i]->getCState()], i);
            // if (m_access == 20) exit(0);
            return i;
        }

        // Find the last recently used between modified blocks
        if (m_lru_bits[i] > m_lru_bits[index] && isValidReplacement(i))
            index = i;

        // Check if all are modified
        if (!(m_cache_block_info_array[i]->getCState() == CacheState::MODIFIED))
            all_modified = false;
    }

    if (all_modified)
    {
        cntlr->flush();
        printf("RETORNEI o bloco 0\n");
        exit(0);
        return 0;
    }

    LOG_ASSERT_ERROR(index < m_associativity, "Error Finding LRU bits");

    // Mark our newly-inserted line as most-recently used
    moveToMRU(index);
    m_set_info->incrementAttempt(0);
    printBlockStats();
    printf("RETORNEI o bloco %s da posicao: %d\n", states[m_cache_block_info_array[index]->getCState()], index);

    return index;
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
}

bool CacheSetKruger::isValidReplacement(UInt32 index)
{
    CacheState::cstate_t state = m_cache_block_info_array[index]->getCState(); 
    return (state != CacheState::SHARED_UPGRADING && state != CacheState::MODIFIED);
}

void CacheSetKruger::printBlockStats()
{
    for (UInt32 i = 0; i < m_associativity; i++)
        printf("[%d:%s] ", m_lru_bits[i], states[m_cache_block_info_array[i]->getCState()]);
    printf("\n");
}
