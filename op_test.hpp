#ifndef __OP_TEST_HPP__
#define __OP_TEST_HPP__

#include "gtest/gtest.h"
#include <string>
#include "op.hpp"
using namespace std;

class SevenOpMock: public Base {
    public:
        SevenOpMock() { }

        virtual double evaluate() { return 7.5; }
        virtual string stringify() { return "7.5"; }
};

class ZeroOpMock: public Base {
    public:
        ZeroOpMock() { }

        virtual double evaluate() { return 0.0; }
        virtual string stringify() { return "0.0"; }
};

class NegativeOpMock: public Base {
    public:
        NegativeOpMock() { }

        virtual double evaluate() { return -3.0; }
        virtual string stringify() { return "-3.0"; }
};


TEST(OpTest, OpEvaluateNonZero) {
    Op* test = new Op(8.0);
    EXPECT_DOUBLE_EQ(test->evaluate(), 8.0);
}

TEST(OpTest, SevenOpMockTest) {
    SevenOpMock* test = new SevenOpMock();
    EXPECT_DOUBLE_EQ(test->evaluate(), 7.5);
}

TEST(OpTest, ZeroMockTest) {
    ZeroOpMock* test = new ZeroOpMock();
    EXPECT_DOUBLE_EQ(test->evaluate(), 0.0);
}

TEST(OpTest, NegativeOpMockTest) {
    NegativeOpMock* test = new NegativeOpMock();
    EXPECT_DOUBLE_EQ(test->evaluate(), -3.0);
}
#endif //__OP_TEST_HPP__
