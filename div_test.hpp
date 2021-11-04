#ifndef __DIV_TEST_HPP__
#define __DIV_TEST_HPP__

#include "gtest/gtest.h"
#include <string>
#include "div.hpp"
using namespace std;

class WholeDivMock: public Base {
    public:
        WholeDivMock() { }

        virtual double evaluate() { return 35.0; }
        virtual string stringify() { return "35.0"; }
};

class FractionDivMock: public Base {
    public:
        FractionDivMock() { }

        virtual double evaluate() { return 0.75; }
        virtual string stringify() { return "0.75"; }
};

class ZeroDivMock: public Base {
    public:
        ZeroDivMock() { }

        virtual double evaluate() { return 0.0; }
        virtual string stringify() { return "0.0"; }
};


class NegativeDivMock: public Base {
    public:
        NegativeDivMock() { }

        virtual double evaluate() { return -3.0; }
        virtual string stringify() { return "-3.0"; }
};


TEST(DivTest, WholeDivMockTest) {
    WholeDivMock* test = new WholeDivMock();
    EXPECT_DOUBLE_EQ(test->evaluate(), 35.0);
}

TEST(DivTest, FractionDivMockTest) {
    FractionDivMock* test = new FractionDivMock();
    EXPECT_DOUBLE_EQ(test->evaluate(), 0.75);
}

TEST(DivTest, ZeroDivMockTest) {
    ZeroDivMock* test = new ZeroDivMock();
    EXPECT_DOUBLE_EQ(test->evaluate(), 0.0);
}

TEST(DivTest, NeegativeDivMockTest) {
    NegativeDivMock* test = new NegativeDivMock();
    EXPECT_DOUBLE_EQ(test->evaluate(), -3.0);
}

#endif //__OP_TEST_HPP__

