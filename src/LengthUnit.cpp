//
// Created by twer  on 5/15/15.
//

#include "LengthUnit.h"

const int CM_CON_FACTOR = 1;
const int M_CON_FACTOR = 100;


LengthUnit::LengthUnit(unsigned int _conversionFactor)  : _conversionFactor(_conversionFactor) {

}

unsigned int LengthUnit::GetConversionFactor() const {
    return _conversionFactor;
}

LengthUnit LengthUnit::CM(CM_CON_FACTOR);
LengthUnit LengthUnit::M(M_CON_FACTOR);
