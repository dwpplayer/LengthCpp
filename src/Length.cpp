//
// Created by twer  on 5/15/15.
//

#include "Length.h"

const int CM_CON_FACTOR = 1;
const int M_CON_FACTOR = 100;

bool Length::operator == (const Length &other)const {

    return getAmountInBaseUnit() == other.getAmountInBaseUnit();

}

Amount Length::getAmountInBaseUnit()const {
    switch(_unit)
    {
        case LengthUnit::CM:
            return _value * CM_CON_FACTOR;
        case LengthUnit::M:
            return _value * M_CON_FACTOR;
        default:
            break;
    }
    return 0;
}

Length::Length(Amount n) :Length(n, LengthUnit::M){

}

Length::Length():Length(0) {

}


Length::Length(Amount _value, LengthUnit unit) : _value(_value), _unit(unit)
{
}
