#ifndef __POW_TEST_HPP__
#define __POW_TEST_HPP__

#include "gtest/gtest.h"
#include <string>
#include "pow.hpp"
using namespace std;

class PositivePowMock: public Base {
    public:
        PositivePowMock() { }

        virtual double evaluate() { return 9.0; }
        virtual string stringify() { return "9.0"; }
};

class ZeroPowMock: public Base {
    public:
        ZeroPowMock() { }

        virtual double evaluate() { return 0.0; }
        virtual string stringify() { return "0.0"; }
};

class NegativePowMock: public Base {
    public:
        NegativePowMock() { }

        virtual double evaluate() { return -1.0; }
        virtual string stringify() { return "-1.0"; }
};


TEST(PowTest, PositivePowMockTest) {
    PositivePowMock* test = new PositivePowMock();
    EXPECT_DOUBLE_EQ(test->evaluate(), 9.0);
}

TEST(PowTest, ZeroMultMockTest) {
    ZeroPowMock* test = new ZeroPowMock();
    EXPECT_DOUBLE_EQ(test->evaluate(), 0.0);
}

TEST(PowTest, NegativePowMockTest) {
    NegativePowMock* test = new NegativePowMock();
    EXPECT_DOUBLE_EQ(test->evaluate(), -1.0);
}

#endif //__POW_TEST_HPP__

