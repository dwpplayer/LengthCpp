//
// Created by twer  on 5/15/15.
//

#ifndef LENGTH_LENGTH_H
#define LENGTH_LENGTH_H


class Length {
public:
    Length(int n);

    Length();

public:
    bool operator == (const Length & other)const;

public:
    int _value;
};


#endif //LENGTH_LENGTH_H
