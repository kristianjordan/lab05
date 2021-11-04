#ifndef __MULT_TEST_HPP__
#define __MULT_TEST_HPP__

#include "gtest/gtest.h"
#include <string>
#include "mult.hpp"
using namespace std;

class SevenMultMock: public Base {
    public:
        SevenMultMock() { }

        virtual double evaluate() { return 7.5; }
        virtual string stringify() { return "7.5"; }
};

class ZeroMultMock: public Base {
    public:
        ZeroMultMock() { }

        virtual double evaluate() { return 0.0; }
        virtual string stringify() { return "0.0"; }
};

class NegativeMultMock: public Base {
    public:
        NegativeMultMock() { }

        virtual double evaluate() { return -3.0; }
        virtual string stringify() { return "-3.0"; }
};


TEST(MultTest, SevenMultMockTest) {
    SevenMultMock* test = new SevenMultMock();
    EXPECT_DOUBLE_EQ(test->evaluate(), 7.5);
}

TEST(MultTest, ZeroMultMockTest) {
    ZeroMultMock* test = new ZeroMultMock();
    EXPECT_DOUBLE_EQ(test->evaluate(), 0.0);
}

TEST(MultTest, NegativeMultMockTest) {
    NegativeMultMock* test = new NegativeMultMock();
    EXPECT_DOUBLE_EQ(test->evaluate(), -3.0);
}

#endif //__OP_TEST_HPP__

