//
// Created by twer  on 5/15/15.
//

#include "LengthTest.h"
#include "../src/Length.h"


TEST_F(LengthTest, should_be_equal_when_compare_two_lengths)
{
    Length lengthA;
    Length lengthB;
    ASSERT_TRUE(lengthA == lengthB);
}