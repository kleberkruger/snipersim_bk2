#ifndef CACHE_SET_KRUGER_H
#define CACHE_SET_KRUGER_H

#include "cache_set.h"
#include "cache_set_lru.h"

class CacheSetKruger : public CacheSet
{
public:
    CacheSetKruger(CacheBase::cache_t cache_type, UInt32 associativity, UInt32 blocksize,
                   CacheSetInfoLRU *set_info, UInt8 num_attempts);
    virtual ~CacheSetKruger();

    virtual UInt32 getReplacementIndex(CacheCntlr *cntlr);
    void updateReplacementIndex(UInt32 accessed_index);

protected:
    static const constexpr char *const states[] = {"INVALID", "SHARED", "SHARED_UPGRADING", "EXCLUSIVE", "OWNED", "MODIFIED"};
    UInt64 m_access; // Added by Kruger

    const UInt8 m_num_attempts;
    UInt8 *m_lru_bits;
    CacheSetInfoLRU *m_set_info;
    void moveToMRU(UInt32 accessed_index);
    bool isValidReplacement2(UInt32 index);
    void printBlockStats();
};

#endif /* CACHE_SET_KRUGER_H */