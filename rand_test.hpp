#ifndef __RAND_TEST_HPP__
#define __RAND_TEST_HPP__

#include "gtest/gtest.h"
#include <string>
#include "rand.hpp"
#include "mult.hpp"
using namespace std;

// real rand test

TEST(RandTest, RandMultTest) {
    Rand *test = new Rand();
    Op * ten = new Op(10);
    double randomNumber = test->evaluate(); // set variable equal to random generated number
    Op * random = new Op(randomNumber); // create new op object and pass in random number to use in 
					// multiplication
    Mult * multiplication = new Mult(random, ten);
    EXPECT_GE(randomNumber, 1);
    EXPECT_TRUE(multiplication->stringify() == ("(" + to_string(randomNumber) + " * " + to_string(10.000000) + ")"));
	
	
}


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

