#ifndef CACHE_SET_KRUGER_H
#define CACHE_SET_KRUGER_H

#include "cache_set.h"

class CacheSetKruger : public CacheSet
{
   public:
      CacheSetKruger(CacheBase::cache_t cache_type, UInt32 associativity, UInt32 blocksize);
      ~CacheSetKruger();

      UInt32 getReplacementIndex(CacheCntlr *cntlr);
      void updateReplacementIndex(UInt32 accessed_index);

   private:
      UInt8 *m_lru_bits;

       static const constexpr char *const states[] = {"INVALID", "SHARED", "SHARED_UPGRADING", "EXCLUSIVE", "OWNED", "MODIFIED"};

       void printBlockStats();
       bool isValidReplacement2(UInt32 index);
       void injectTest();
};

#endif /* CACHE_SET_KRUGER_H */