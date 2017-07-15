/**
* @file       SpendMetaData.cpp
*
* @brief      SpendMetaData class for the Facoin library.
*
* @author     Ian Miers, Christina Garman and Matthew Green
* @date       June 2013
*
* @copyright  Copyright 2013 Ian Miers, Christina Garman and Matthew Green
* @license    This project is released under the MIT license.
**/

#include "Facoin.h"

namespace libfacoin {

SpendMetaData::SpendMetaData(uint256 accumulatorId, uint256 txHash): accumulatorId(accumulatorId), txHash(txHash) {}

} /* namespace libfacoin */
