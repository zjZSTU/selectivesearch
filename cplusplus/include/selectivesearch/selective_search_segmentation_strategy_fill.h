//
// Created by zj on 2020/2/14.
//

#ifndef CPLUPLUS_SELECTIVE_SEARCH_SEGMENTATION_STRATEGY_FILL_H
#define CPLUPLUS_SELECTIVE_SEARCH_SEGMENTATION_STRATEGY_FILL_H

#include "selective_search_segmentation_strategy.h"

namespace segmentation {
    /** @brief Fill-based strategy for the selective search segmentation algorithm
    The class is implemented from the algorithm described in @cite uijlings2013selective.
    */
    class SelectiveSearchSegmentationStrategyFill : public SelectiveSearchSegmentationStrategy {
    };

    /** @brief Create a new fill-based strategy */
    std::shared_ptr<SelectiveSearchSegmentationStrategyFill> createSelectiveSearchSegmentationStrategyFill();

}

#endif //CPLUPLUS_SELECTIVE_SEARCH_SEGMENTATION_STRATEGY_FILL_H
