//
// Created by twer  on 5/15/15.
//

#ifndef LENGTH_LENGTH_H
#define LENGTH_LENGTH_H


#include <iosfwd>
#include <string>
#include "LengthUnit.h"


class Length {
public:
    Length(Amount n);

    Length(Amount n, LengthUnit const &unit);

    Length();

public:
    bool operator == (const Length & other)const;


private:
    Amount getAmountInBaseUnit()const;

private:
    Amount _value;
    LengthUnit _unit;
};


#endif //LENGTH_LENGTH_H
