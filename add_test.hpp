#ifndef __ADD_TEST_HPP__
#define __ADD_TEST_HPP__

#include "gtest/gtest.h"
#include <string>
#include "add.hpp"
using namespace std;

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

// real addition testing
TEST(AddTest, AddTest) {
    Op *operand1 = new Op(2);
    Op *operand2 = new Op(9);
    Add *addition = new Add(operand1, operand2);
    
    EXPECT_DOUBLE_EQ(addition->evaluate(), 11.0);
}

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


#endif //__ADD_TEST_HPP__

