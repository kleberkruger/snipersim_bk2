#ifndef CACHE_SET_KRUGER_H
#define CACHE_SET_KRUGER_H

#include "cache_set.h"

class CacheSetInfoKruger : public CacheSetInfo
{
   public:
      CacheSetInfoKruger(String name, String cfgname, core_id_t core_id, UInt32 associativity, UInt8 num_attempts);
      virtual ~CacheSetInfoKruger();
      void increment(UInt32 index)
      {
         LOG_ASSERT_ERROR(index < m_associativity, "Index(%d) >= Associativity(%d)", index, m_associativity);
         ++m_access[index];
      }
      void incrementAttempt(UInt8 attempt)
      {
         if (m_attempts)
            ++m_attempts[attempt];
         else
            LOG_ASSERT_ERROR(attempt == 0, "No place to store attempt# histogram but attempt != 0");
      }
   private:
      const UInt32 m_associativity;
      UInt64* m_access;
      UInt64* m_attempts;
};

class CacheSetKruger : public CacheSet
{
   public:
      CacheSetKruger(CacheBase::cache_t cache_type,
            UInt32 associativity, UInt32 blocksize, CacheSetInfoKruger* set_info, UInt8 num_attempts);
      virtual ~CacheSetKruger();

      virtual UInt32 getReplacementIndex(CacheCntlr *cntlr);
      void updateReplacementIndex(UInt32 accessed_index);

   protected:
      const UInt8 m_num_attempts;
      UInt8* m_lru_bits;
      CacheSetInfoKruger* m_set_info;
      void moveToMRU(UInt32 accessed_index);
};

#endif /* CACHE_SET_KRUGER_H */