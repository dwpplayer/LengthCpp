//
// Created by twer  on 5/15/15.
//

#include "Length.h"


bool Length::operator == (const Length &other)const {

    return getAmountInBaseUnit() == other.getAmountInBaseUnit();

}

Amount Length::getAmountInBaseUnit()const {
    return _value * _unit;
}

Length::Length(Amount n) :_value(n) {

}

Length::Length():Length(0) {

}


Length::Length(Amount _value, LengthUnit unit) : _value(_value), _unit(unit)
{
}
