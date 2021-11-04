#ifndef __ADD_TEST_HPP__
#define __ADD_TEST_HPP__

#include "gtest/gtest.h"
#include <string>
#include "add.hpp"
using namespace std;



// real addition testing
TEST(AddTest, AddTestPositiveNumber) {
	Op *operand1 = new Op(2);
	Op *operand2 = new Op(9);
        Add *addition = new Add(operand1, operand2);
	
        EXPECT_DOUBLE_EQ(addition->evaluate(), 11.0);
	EXPECT_TRUE(addition->stringify() == "(2.000000 + 9.000000)");
}

TEST(AddTest, AddTestZero) {
        Op *operand1 = new Op(5);
        Op *operand2 = new Op(-5);
        Add *addition = new Add(operand1, operand2);

        EXPECT_DOUBLE_EQ(addition->evaluate(), 0.0);
        EXPECT_TRUE(addition->stringify() == "(5.000000 + -5.000000)");
}

TEST(AddTest, AddTestNegativeNumber) {
        Op *operand1 = new Op(-95);
        Op *operand2 = new Op(-5);
        Add *addition = new Add(operand1, operand2);

        EXPECT_DOUBLE_EQ(addition->evaluate(), -100.0);
        EXPECT_TRUE(addition->stringify() == "(-95.000000 + -5.000000)");
}

TEST(AddTest, AddTestFraction) {
        Op *operand1 = new Op(0.50);
        Op *operand2 = new Op(0.25);
        Add *addition = new Add(operand1, operand2);

        EXPECT_DOUBLE_EQ(addition->evaluate(), 0.75);
        EXPECT_TRUE(addition->stringify() == "(0.500000 + 0.250000)");
}


// mock testing and definition
/*
class WholeAddMock: public Base {
    public:
        WholeAddMock() { }

        virtual double evaluate() { return 75.0; }
        virtual string stringify() { return "75.0"; }
};

class FractionAddMock: public Base {
    public:
        FractionAddMock() { }

        virtual double evaluate() { return 0.357; }
        virtual string stringify() { return "0.357"; }
};

class ZeroAddMock: public Base {
    public:
        ZeroAddMock() { }

        virtual double evaluate() { return 0.0; }
        virtual string stringify() { return "0.0"; }
};


class NegativeAddMock: public Base {
    public:
        NegativeAddMock() { }

        virtual double evaluate() { return -89.0; }
        virtual string stringify() { return "-89.0"; }
};

class RemainderAddMock: public Base {
    public:
        RemainderAddMock() { }

        virtual double evaluate() { return 9.75; }
        virtual string stringify() { return "9.75"; }
};

TEST(AddTest, WholeAddMockTest) {
    WholeAddMock* test = new WholeAddMock();
    EXPECT_DOUBLE_EQ(test->evaluate(), 75.0);
}

TEST(AddTest, FractionAddMockTest) {
    FractionAddMock* test = new FractionAddMock();
    EXPECT_DOUBLE_EQ(test->evaluate(), 0.357);
}

TEST(AddTest, ZeroAddMockTest) {
    ZeroAddMock* test = new ZeroAddMock();
    EXPECT_DOUBLE_EQ(test->evaluate(), 0.0);
}

TEST(AddTest, NegativeAddMockTest) {
    NegativeAddMock* test = new NegativeAddMock();
    EXPECT_DOUBLE_EQ(test->evaluate(), -89.0);
}

TEST(AddTest, RemainderAddMockTest) {
    RemainderAddMock* test = new RemainderAddMock();
    EXPECT_DOUBLE_EQ(test->evaluate(), 9.75);
}

*/
#endif //__ADD_TEST_HPP__

