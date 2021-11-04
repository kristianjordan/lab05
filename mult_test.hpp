#ifndef __MULT_TEST_HPP__
#define __MULT_TEST_HPP__

#include "gtest/gtest.h"
#include <string>
#include "mult.hpp"
#include "div.hpp"
using namespace std;


// (5 * 5) / 5
TEST(MultTest, MultDivCombinedTest) {
        Base *operand1 = new Op(5);
        Base *operand2 = new Op(5);
        Base *operand3 = new Op(5);
        Base *multiplication = new Mult(operand1, operand2);
        Base *division = new Div(multiplication, operand3);

        EXPECT_DOUBLE_EQ(division->evaluate(), 5.0);
        EXPECT_TRUE(division->stringify() == "((5.000000 * 5.000000) / 5.000000)");

}


TEST(MultTest, MultTestPositiveNumber) {
        Op *operand1 = new Op(4);
        Op *operand2 = new Op(5);
        Mult *multiplication = new Mult(operand1, operand2);

        EXPECT_DOUBLE_EQ(multiplication->evaluate(), 20.0);
        EXPECT_TRUE(multiplication->stringify() == "(4.000000 * 5.000000)");
}

TEST(MultTest, MultTestZero) {
        Op *operand1 = new Op(17);
        Op *operand2 = new Op(0);
        Mult *multiplication = new Mult(operand1, operand2);

        EXPECT_DOUBLE_EQ(multiplication->evaluate(), 0.0);
        EXPECT_TRUE(multiplication->stringify() == "(17.000000 * 0.000000)");
}

TEST(MultTest, MultNegativeNumber) {
        Op *operand1 = new Op(-8);
        Op *operand2 = new Op(6);
        Mult *multiplication = new Mult(operand1, operand2);

        EXPECT_DOUBLE_EQ(multiplication->evaluate(), -48.0);
        EXPECT_TRUE(multiplication->stringify() == "(-8.000000 * 6.000000)");
}

TEST(MultTest, MultTestFraction) {
        Op *operand1 = new Op(1.0);
        Op *operand2 = new Op(1.5);
        Mult *multiplication = new Mult(operand1, operand2);

        EXPECT_DOUBLE_EQ(multiplication->evaluate(), 1.50);
        EXPECT_TRUE(multiplication->stringify() == "(1.000000 * 1.500000)");
}


#endif //__MULT_TEST_HPP__

