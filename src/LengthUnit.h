//
// Created by twer  on 5/15/15.
//

#ifndef LENGTH_LENGTHUNIT_H
#define LENGTH_LENGTHUNIT_H


class LengthUnit {
public:
    LengthUnit(unsigned int _conversionFactor);

    unsigned int GetConversionFactor()const;


public:
    static LengthUnit CM;
    static LengthUnit M;

private:
    unsigned int _conversionFactor;
};


#endif //LENGTH_LENGTHUNIT_H
