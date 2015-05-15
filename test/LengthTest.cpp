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


TEST_F(LengthTest, should_be_equal_when_compare_two_lengths_with_same_length)
{
    Length lengthA(100000);
    Length lengthB(100000);

    ASSERT_TRUE(lengthA == lengthB);
}

TEST_F(LengthTest, should_not_be_equal_when_compare_two_lengths_with_different_length)
{
    Length lengthA(1000);
    Length lengthB(100000);

    ASSERT_FALSE(lengthA == lengthB);
}
