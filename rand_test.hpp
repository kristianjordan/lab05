#ifndef __RAND_TEST_HPP__
#define __RAND_TEST_HPP__

#include "gtest/gtest.h"
#include <string>
#include "rand.hpp"
using namespace std;

class OneRandMock: public Base {
    public:
        OneRandMock() { }

        virtual double evaluate() { return 1.0; }
        virtual string stringify() { return "1.0"; }
};

class FiftyRandMock: public Base {
    public:
        FiftyRandMock() { }

        virtual double evaluate() { return 50.0; }
        virtual string stringify() { return "50.0"; }
};

class HundredRandMock: public Base {
    public:
        HundredRandMock() { }

        virtual double evaluate() { return 100.0; }
        virtual string stringify() { return "100.0"; }
};


TEST(RandTest, OneRandMockTest) {
    OneRandMock* test = new OneRandMock();
    EXPECT_DOUBLE_EQ(test->evaluate(), 1.0);
}

TEST(RandTest, FiftyRandMockTest) {
    FiftyRandMock* test = new FiftyRandMock();
    EXPECT_DOUBLE_EQ(test->evaluate(), 50.0);
}

TEST(RandTest, HundredRandMockTest) {
    HundredRandMock* test = new HundredRandMock();
    EXPECT_DOUBLE_EQ(test->evaluate(), 100.0);
}

#endif //__RAND_TEST_HPP__

