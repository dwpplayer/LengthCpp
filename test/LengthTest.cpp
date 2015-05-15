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


TEST_F(LengthTest, should_be_equal_when_compare_two_lengths_with_same_length_and_unit)
{
    Length lengthA(2, LengthUnit::CM);
    Length lengthB(2, LengthUnit::CM);
    ASSERT_TRUE(lengthA == lengthB);
}

TEST_F(LengthTest, should_not_be_equal_when_compare_two_lengths_with_same_length_and_different_unit)
{
    Length lengthA(2, LengthUnit::M);
    Length lengthB(2, LengthUnit::CM);
    ASSERT_FALSE(lengthA == lengthB);
}

TEST_F(LengthTest, should_not_be_equal_when_compare_two_lengths_with_different_length_and_same_unit)
{
    Length lengthA(2, LengthUnit::CM);
    Length lengthB(1, LengthUnit::CM);
    ASSERT_FALSE(lengthA == lengthB);
}

TEST_F(LengthTest, should_not_be_equal_when_compare_two_lengths_with_different_length_and_different_unit)
{
    Length lengthA(1, LengthUnit::M);
    Length lengthB(2, LengthUnit::CM);
    ASSERT_FALSE(lengthA == lengthB);
}

TEST_F(LengthTest, should_be_equal_when_compare_two_length_with_same_logic_length_but_with_different_unit)
{
    Length lengthA(1, LengthUnit::M);
    Length lengthB(100, LengthUnit::CM);
    ASSERT_TRUE(lengthA == lengthB);
}

TEST_F(LengthTest, should_not_be_equal_when_compare_two_length_with_different_logic_length)
{
    Length lengthA(2 , LengthUnit::M);
    Length lengthB(100, LengthUnit::CM);
    ASSERT_FALSE(lengthA == lengthB);
}