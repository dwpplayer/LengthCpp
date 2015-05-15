//
// Created by twer  on 5/15/15.
//

#ifndef LENGTH_LENGTH_H
#define LENGTH_LENGTH_H


#include <iosfwd>
#include <string>


enum LengthUnit{
    CM = 1,
    M = 100 * CM
};

class Length {
public:
    Length(int n);

    Length(int _value, LengthUnit _unit);

    Length();

public:
    bool operator == (const Length & other)const;

public:
    int _value;
    LengthUnit _unit;
};


#endif //LENGTH_LENGTH_H
