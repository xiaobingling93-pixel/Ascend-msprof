/* -------------------------------------------------------------------------
* Copyright (c) 2026 Huawei Technologies Co., Ltd.
 * This file is part of the MindStudio project.
 *
 * MindStudio is licensed under Mulan PSL v2.
 * You can use this software according to the terms and conditions of the Mulan PSL v2.
 * You may obtain a copy of Mulan PSL v2 at:
 *
 *    http://license.coscl.org.cn/MulanPSL2
 *
 * THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
 * EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
 * MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
 * See the Mulan PSL v2 for more details.
 * -------------------------------------------------------------------------*/
#ifndef MSPROF_ANALYSIS_BIU_PERF_PROCESSOR_H
#define MSPROF_ANALYSIS_BIU_PERF_PROCESSOR_H

#include "analysis/csrc/domain/data_process/data_processor.h"
#include "analysis/csrc/domain/entities/viewer_data/system/include/biu_perf_data.h"

namespace Analysis {
namespace Domain {
using namespace Analysis::Utils;
using OriBiuPerfFormat = std::vector<std::tuple<uint16_t, std::string, uint16_t, std::string, uint64_t, uint64_t, uint16_t>>;
class BiuPerfProcessor : public DataProcessor {
public:
    BiuPerfProcessor() = default;
    explicit BiuPerfProcessor(const std::string &profPath);
private:
    bool Process(DataInventory& dataInventory) override;
    bool ProcessSingleDevice(const std::string &devicePath, std::vector<BiuPerfData> &allProcessedData,
        LocaltimeContext& localtimeContext, SyscntConversionParams& params);
};
}
}


#endif //MSPROF_ANALYSIS_BIU_PERF_PROCESSOR_H