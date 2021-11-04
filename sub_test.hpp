#ifndef __ADD_TEST_HPP__
#define __ADD_TEST_HPP__

#include "gtest/gtest.h"
#include <string>
#include "sub.hpp"
using namespace std;

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


#endif //__SUB_TEST_HPP__


