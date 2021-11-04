#ifndef __POW_TEST_HPP__
#define __POW_TEST_HPP__

#include "gtest/gtest.h"
#include <string>
#include "pow.hpp"
#include "mult.hpp"
using namespace std;

// (1 ^ 9) * 74
TEST(PowTest, PowMultCombinedTest) {
        Base *operand1 = new Op(1);
        Base *operand2 = new Op(9);
        Base *operand3 = new Op(74);
        Base *pow = new Pow(operand1, operand2);
        Base *multiplication = new Mult(pow, operand3);

        EXPECT_DOUBLE_EQ(multiplication->evaluate(), 74.0);
        EXPECT_TRUE(multiplication->stringify() == "((1.000000 ^ 9.000000) * 74.000000)");
}


TEST(PowTest, PowTestPositiveNumber) {
        Op *operand1 = new Op(1);
        Op *operand2 = new Op(35);
        Pow *pow = new Pow(operand1, operand2);

        EXPECT_DOUBLE_EQ(pow->evaluate(), 1.0);
        EXPECT_TRUE(pow->stringify() == "(1.000000 ^ 35.000000)");
}

TEST(PowTest, PowTestZero) {
        Op *operand1 = new Op(0);
        Op *operand2 = new Op(13);
        Pow *pow = new Pow(operand1, operand2);

        EXPECT_DOUBLE_EQ(pow->evaluate(), 0.0);
        EXPECT_TRUE(pow->stringify() == "(0.000000 ^ 13.000000)");
}

TEST(PowTest, PowNegativeNumber) {
        Op *operand1 = new Op(-1);
        Op *operand2 = new Op(3);
        Pow *pow = new Pow(operand1, operand2);

        EXPECT_DOUBLE_EQ(pow->evaluate(), -1.0);
        EXPECT_TRUE(pow->stringify() == "(-1.000000 ^ 3.000000)");
}

#endif //__POW_TEST_HPP__

