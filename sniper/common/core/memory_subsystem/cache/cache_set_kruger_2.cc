#include "cache_set_kruger_2.h"
#include "log.h"

constexpr const char *const CacheSetKruger::states[];

CacheSetKruger::CacheSetKruger(CacheBase::cache_t cache_type, UInt32 associativity, UInt32 blocksize)
    : CacheSet(cache_type, associativity, blocksize)
{
    m_lru_bits = new UInt8[m_associativity];
    for (UInt32 i = 0; i < m_associativity; i++)
        m_lru_bits[i] = i;
}

CacheSetKruger::~CacheSetKruger()
{
    delete[] m_lru_bits;
}

UInt32
CacheSetKruger::getReplacementIndex(CacheCntlr *cntlr)
{
    // injectTest();

    printf("\nINICIO getReplacementIndex()\n");
    printBlockStats();

    // Invalidations may mess up the LRU bits

    bool all_modified = true;

    for (UInt32 i = 0; i < m_associativity; i++)
    {
        if (!m_cache_block_info_array[i]->isValid())
        {
            updateReplacementIndex(i);
            printf("RETORNEI o bloco %s da posicao: %d\n", states[m_cache_block_info_array[i]->getCState()], i);
            // printf("FIM getReplacementIndex()\n");
            return i;
        }
        else if (!(m_cache_block_info_array[i]->getCState() == CacheState::MODIFIED))
        {
            all_modified = false;
        }
    }

    if (all_modified)
    {
        cntlr->flush();
        // printf("!!! FAZER FLUSH !!!\n");
        printf("RETORNEI o bloco 0\n");
        // printf("FIM getReplacementIndex()\n");
        return 0;
    }

    // printf("NAO TEM blocos inválidos\n");
    // printBlockStats();

    UInt32 target = 0;
    while (target < m_associativity)
    {
        for (UInt32 i = 0; i < m_associativity; i++)
        {
            // printf("i = %d (%d == %d)?\n", i, m_lru_bits[i], target);
            if (m_lru_bits[i] == target && isValidReplacement(i) && isValidReplacement2(i))
            {
                updateReplacementIndex(i);
                printf("RETORNEI o bloco %s da posicao: %d\n", states[m_cache_block_info_array[i]->getCState()], i);
                // printf("FIM getReplacementIndex()\n");
                return i;
            }
        }
        target++;
    }

    LOG_PRINT_ERROR("Error Finding LRU bits");
}

void CacheSetKruger::updateReplacementIndex(UInt32 accessed_index)
{
    // printf("\nINÍCIO updateReplacementIndex(%d)\n", accessed_index);
    // printBlockStats();
    for (UInt32 i = 0; i < m_associativity; i++)
    {
        if (m_lru_bits[i] < m_lru_bits[accessed_index])
            m_lru_bits[i]++;
    }
    m_lru_bits[accessed_index] = 0;
    // printBlockStats();
    // printf("FIM updateReplacementIndex(%d)\n", accessed_index);
}

void CacheSetKruger::printBlockStats()
{
    for (UInt32 i = 0; i < m_associativity; i++)
        printf("[%d:%s] ", m_lru_bits[i], states[m_cache_block_info_array[i]->getCState()]);
    printf("\n");
}

bool CacheSetKruger::isValidReplacement2(UInt32 index)
{
    return m_cache_block_info_array[index]->getCState() != CacheState::MODIFIED;
}

void CacheSetKruger::injectTest()
{
    static int step = 1;
    if (step == 1)
        m_cache_block_info_array[0]->setCState(CacheState::MODIFIED);
    else if (step == 2)
        m_cache_block_info_array[1]->setCState(CacheState::MODIFIED);
    else if (step == 3)
        m_cache_block_info_array[2]->setCState(CacheState::MODIFIED);
    else if (step == 4)
        m_cache_block_info_array[3]->setCState(CacheState::MODIFIED);

    step++;
}