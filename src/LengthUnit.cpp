//
// Created by twer  on 5/15/15.
//

#include "LengthUnit.h"
#include "Length.h"

const int CM_CON_FACTOR = 1;
const int M_CON_FACTOR = 100;


LengthUnit::LengthUnit(unsigned int _conversionFactor)  : _conversionFactor(_conversionFactor) {

}

unsigned int LengthUnit::toAmountInBaseUnit(Amount amount) const {
    return amount * _conversionFactor;
}

LengthUnit LengthUnit::CM(CM_CON_FACTOR);
LengthUnit LengthUnit::M(M_CON_FACTOR);
