#include "cache_set_kruger.h"
#include "log.h"
#include "stats.h"

constexpr const char *const CacheSetKruger::states[];

CacheSetKruger::CacheSetKruger(
    CacheBase::cache_t cache_type,
    UInt32 associativity, UInt32 blocksize, CacheSetInfoLRU *set_info, UInt8 num_attempts, float percentage_to_wb)
    : CacheSet(cache_type, associativity, blocksize), m_num_attempts(num_attempts), m_set_info(set_info),
      m_percentage_to_wb(percentage_to_wb)
{
    m_lru_bits = new UInt8[m_associativity];
    for (UInt32 i = 0; i < m_associativity; i++)
        m_lru_bits[i] = i;
}

CacheSetKruger::~CacheSetKruger()
{
    delete[] m_lru_bits;
}

// void CacheSetKruger::insert(CacheBlockInfo *cache_block_info, Byte *fill_buff, bool *eviction, CacheBlockInfo *evict_block_info, Byte *evict_buff, CacheCntlr *cntlr)
// {
//     // This replacement strategy does not take into account the fact that
//     // cache blocks can be voluntarily flushed or invalidated due to another write request
//     const UInt32 index = getReplacementIndex(cntlr);
//     assert(index < m_associativity);

//     Sim();

//     printf("insert in LRU");

//     assert(eviction != NULL);

//     if (m_cache_block_info_array[index]->isValid())
//     {
//         *eviction = true;
//         // FIXME: This is a hack. I dont know if this is the best way to do
//         evict_block_info->clone(m_cache_block_info_array[index]);
//         if (evict_buff != NULL && m_blocks != NULL)
//             memcpy((void *)evict_buff, &m_blocks[index * m_blocksize], m_blocksize);
//     }
//     else
//     {
//         *eviction = false;
//     }

//     // FIXME: This is a hack. I dont know if this is the best way to do
//     m_cache_block_info_array[index]->clone(cache_block_info);

//     if (fill_buff != NULL && m_blocks != NULL)
//         memcpy(&m_blocks[index * m_blocksize], (void *)fill_buff, m_blocksize);
// }

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
    UInt32 index = 0, num_modified = 0;
    UInt8 max_bits = 0;

    // First try to find an invalid block
    for (UInt32 i = 0; i < m_associativity; i++)
    {
        if (!m_cache_block_info_array[i]->isValid())
        {
            // Mark our newly-inserted line as most-recently used
            moveToMRU(i);
            return i;
        }

        // Find the last recently used between modified blocks
        if (m_lru_bits[i] > max_bits && isValidReplacement(i))
        {
            index = i;
            max_bits = m_lru_bits[i];
        }

        // Check if all are modified
        if (m_cache_block_info_array[i]->getCState() == CacheState::MODIFIED)
            num_modified++;
    }

    if (num_modified >= m_associativity * m_percentage_to_wb)
    {
        max_bits = m_associativity - 1;
        // Return the oldest block among the modified ones
        for (UInt32 i = 0; i < m_associativity; i++)
        {
            if (m_lru_bits[i] == max_bits)
            {
                cntlr->checkpoint();
                return i;
            }
        }
    }

    LOG_ASSERT_ERROR(index < m_associativity, "Error Finding LRU bits");

    // Mark our newly-inserted line as most-recently used
    moveToMRU(index);
    m_set_info->incrementAttempt(0);
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
