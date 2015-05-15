//
// Created by twer  on 5/15/15.
//

#ifndef LENGTH_LENGTHUNIT_H
#define LENGTH_LENGTHUNIT_H

typedef unsigned int Amount;

class LengthUnit {
public:
    LengthUnit(unsigned int _conversionFactor);

    unsigned int toAmountInBaseUnit(Amount amount) const;


public:
    static LengthUnit CM;
    static LengthUnit M;

private:
    unsigned int _conversionFactor;
};


#endif //LENGTH_LENGTHUNIT_H
