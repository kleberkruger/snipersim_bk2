#include "simulator.h"
#include "dram_perf_model.h"
#include "dram_perf_model_constant.h"
#include "dram_perf_model_readwrite.h"
#include "dram_perf_model_normal.h"
#include "config.hpp"

DramPerfModel *DramPerfModel::createDramPerfModel(core_id_t core_id, UInt32 cache_block_size)
{
   String type = Sim()->getCfg()->getString("perf_model/dram/type");

   if (type == "constant")
   {
      return new DramPerfModelConstant(core_id, cache_block_size);
   }
   else if (type == "readwrite")
   {
      return new DramPerfModelReadWrite(core_id, cache_block_size);
   }
   else if (type == "normal")
   {
      return new DramPerfModelNormal(core_id, cache_block_size);
   }
   else
   {
      LOG_PRINT_ERROR("Invalid DRAM model type %s", type.c_str());
   }
}

void DramPerfModel::dramAccessed(SubsecondTime pkt_time, UInt64 pkt_size, core_id_t requester, IntPtr address, DramCntlrInterface::access_t access_type, ShmemPerf *perf)
{
   // static SubsecondTime last = pkt_time;
   // if (access_type == DramCntlrInterface::WRITE)
   // {
   //    // SubsecondTime curr = Sim()->getClockSkewMinimizationServer()->getGlobalTime();
   //    SubsecondTime t = pkt_time >= last ? (pkt_time - last) : (last - pkt_time);
   //    if (pkt_time > last)
   //       last = pkt_time;
   //    fprintf(dram_log_file, "%lu,%lu\n", pkt_time.getNS(), t.getNS());
   // }
}
