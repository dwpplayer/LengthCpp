//
// Created by twer  on 5/15/15.
//

#include "Length.h"

bool Length::operator == (const Length &other)const {
    return true;
}

Length::Length(int n) :_value(n) {

}

Length::Length():Length(0) {

}