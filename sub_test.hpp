#ifndef __SUB_TEST_HPP__
#define __SUB_TEST_HPP__

#include "gtest/gtest.h"
#include <string>
#include "sub.hpp"
#include "add.hpp"
using namespace std;


// real subtraction testing

// 10 - (5+5)
TEST(SubTest, SubAddCombinedTest) {
        Base *operand1 = new Op(5);
        Base *operand2 = new Op(5);
	Base *operand3 = new Op(10);
	Base *addition = new Add(operand1, operand2);
        Base *subtraction = new Sub(operand3, addition);

        EXPECT_DOUBLE_EQ(subtraction->evaluate(), 0.0);
        EXPECT_TRUE(subtraction->stringify() == "(10.000000 - (5.000000 + 5.000000))");

}



TEST(SubTest, SubTestPositiveNumber) {
        Op *operand1 = new Op(700);
        Op *operand2 = new Op(400);
        Sub *subtraction = new Sub(operand1, operand2);

        EXPECT_DOUBLE_EQ(subtraction->evaluate(), 300.0);
        EXPECT_TRUE(subtraction->stringify() == "(700.000000 - 400.000000)");
}

TEST(SubTest, SubTestZero) {
        Op *operand1 = new Op(5);
        Op *operand2 = new Op(5);
        Sub *subtraction = new Sub(operand1, operand2);

        EXPECT_DOUBLE_EQ(subtraction->evaluate(), 0.0);
        EXPECT_TRUE(subtraction->stringify() == "(5.000000 - 5.000000)");
}

TEST(SubTest, SubTestNegativeNumber) {
        Op *operand1 = new Op(5);
        Op *operand2 = new Op(10);
        Sub *subtraction = new Sub(operand1, operand2);

        EXPECT_DOUBLE_EQ(subtraction->evaluate(), -5.0);
        EXPECT_TRUE(subtraction->stringify() == "(5.000000 - 10.000000)");
}

TEST(SubTest, SubTestFraction) {
        Op *operand1 = new Op(0.70);
        Op *operand2 = new Op(0.25);
        Sub *subtraction = new Sub(operand1, operand2);

        EXPECT_DOUBLE_EQ(subtraction->evaluate(), 0.45);
        EXPECT_TRUE(subtraction->stringify() == "(0.700000 - 0.250000)");
}



/*
class WholeSubMock: public Base {
    public:
        WholeSubMock() { }

        virtual double evaluate() { return 17.0; }
        virtual string stringify() { return "17.0"; }
};

class FractionSubMock: public Base {
    public:
        FractionSubMock() { }

        virtual double evaluate() { return 0.95; }
        virtual string stringify() { return "0.95"; }
};

class ZeroSubMock: public Base {
    public:
        ZeroSubMock() { }

        virtual double evaluate() { return 0.0; }
        virtual string stringify() { return "0.0"; }
};


class NegativeSubMock: public Base {
    public:
        NegativeSubMock() { }

        virtual double evaluate() { return -154.0; }
        virtual string stringify() { return "-154.0"; }
};

class RemainderSubMock: public Base {
    public:
        RemainderSubMock() { }

        virtual double evaluate() { return 19.45; }
        virtual string stringify() { return "19.45"; }
};



TEST(SubTest, WholeSubMockTest) {
    WholeSubMock* test = new WholeSubMock();
    EXPECT_DOUBLE_EQ(test->evaluate(), 17.0);
}

TEST(SubTest, FractionAddMockTest) {
    FractionSubMock* test = new FractionSubMock();
    EXPECT_DOUBLE_EQ(test->evaluate(), 0.95);
}

TEST(SubTest, ZeroAddMockTest) {
    ZeroSubMock* test = new ZeroSubMock();
    EXPECT_DOUBLE_EQ(test->evaluate(), 0.0);
}

TEST(SubTest, NegativeAddMockTest) {
    NegativeSubMock* test = new NegativeSubMock();
    EXPECT_DOUBLE_EQ(test->evaluate(), -154.0);
}

TEST(SubTest, RemainderSubMockTest) {
    RemainderSubMock* test = new RemainderSubMock();
    EXPECT_DOUBLE_EQ(test->evaluate(), 19.45);
}
*/

#endif //__SUB_TEST_HPP__


