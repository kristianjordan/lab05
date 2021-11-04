#ifndef __DIV_TEST_HPP__
#define __DIV_TEST_HPP__

#include "gtest/gtest.h"
#include <string>
#include "div.hpp"
#include "mult.hpp"
using namespace std;


// (5 / 5) * 50
TEST(DivTest, DivMultCombinedTest) {
        Base *operand1 = new Op(5);
        Base *operand2 = new Op(5);
        Base *operand3 = new Op(50);
        Base *division = new Div(operand1, operand2);
        Base *multiplication = new Mult(division, operand3);

        EXPECT_DOUBLE_EQ(multiplication->evaluate(), 50.0);
        EXPECT_TRUE(multiplication->stringify() == "((5.000000 / 5.000000) * 50.000000)");

}


TEST(DivTest, DivTestPositiveNumber) {
        Op *operand1 = new Op(25);
        Op *operand2 = new Op(25);
        Div *division = new Div(operand1, operand2);

        EXPECT_DOUBLE_EQ(division->evaluate(), 1.0);
        EXPECT_TRUE(division->stringify() == "(25.000000 / 25.000000)");
}

TEST(DivTest, DovTestZero) {
        Op *operand1 = new Op(0);
        Op *operand2 = new Op(90);
        Div *division = new Div(operand1, operand2);

        EXPECT_DOUBLE_EQ(division->evaluate(), 0.0);
        EXPECT_TRUE(division->stringify() == "(0.000000 / 90.000000)");
}

TEST(DivTest, DivNegativeNumber) {
        Op *operand1 = new Op(-25);
        Op *operand2 = new Op(5);
        Div *division = new Div(operand1, operand2);

        EXPECT_DOUBLE_EQ(division->evaluate(), -5.0);
        EXPECT_TRUE(division->stringify() == "(-25.000000 / 5.000000)");
}

TEST(DivTest, DivisionTestFraction) {
        Op *operand1 = new Op(3.0);
        Op *operand2 = new Op(4.0);
        Div *division = new Div(operand1, operand2);

        EXPECT_DOUBLE_EQ(division->evaluate(), 0.75);
        EXPECT_TRUE(division->stringify() == "(3.000000 / 4.000000)");
}


#endif //__OP_TEST_HPP__

