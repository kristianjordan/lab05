#ifndef __RAND_TEST_HPP__
#define __RAND_TEST_HPP__

#include "gtest/gtest.h"
#include <string>
#include "rand.hpp"
using namespace std;

// real rand test
TEST(RandTest, RandGreaterOrEqualOne) {
    Rand *test = new Rand();
    double randomNumber = test->evaluate(); // set variable equal to random generated number
    EXPECT_GE(randomNumber, 1);
    EXPECT_TRUE(test->stringify() == to_string(randomNumber));
	
}

TEST(RandTest, RandLessEqualHundred) {
    Rand *test = new Rand();
    double randomNumber = test->evaluate(); // set variable equal to random generated number
    EXPECT_LE(randomNumber, 100);
    EXPECT_TRUE(test->stringify() == to_string(randomNumber));
}

#endif //__RAND_TEST_HPP__

