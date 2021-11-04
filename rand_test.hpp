#ifndef __RAND_TEST_HPP__
#define __RAND_TEST_HPP__

#include "gtest/gtest.h"
#include <string>
#include "rand.hpp"
#include "mult.hpp"
using namespace std;

// real rand test

// test case for (random number * 10) being greater than or equal to 1
TEST(RandTest, RandMultTest) {
    Rand *test = new Rand(); // create rand object and assign to pointer

    Op * ten = new Op(10); // create op object and assign to pointer (sets number = 10 in constructor)
    double randomNumber = test->evaluate(); // set variable equal to random generated number

    Op * random = new Op(randomNumber); // create new op object and pass in random number to use in 
					// multiplication
					//
    Mult * multiplication = new Mult(random, ten); // create mult object to pass operands and assign to pointer
    EXPECT_GE(randomNumber, 1); // expect random number to be >= 0
    EXPECT_TRUE(multiplication->stringify() == ("(" + to_string(randomNumber) + " * " + to_string(10.000000) + ")")); // expect stringify function return to = string of equation

    // deallocations
    delete test;
    delete ten;
    delete random;
    delete multiplication;
	
	
}

// test case for random number being greater than or equal to 1
TEST(RandTest, RandGreaterOrEqualOne) {
    // create rand object and assign to pointer
    Rand *test = new Rand();
    double randomNumber = test->evaluate(); // set variable equal to random generated number
    EXPECT_GE(randomNumber, 1); // expect random number to be greater than or equal to 1
    EXPECT_TRUE(test->stringify() == to_string(randomNumber)); // expect stringify function return to = string of equation
	
    // deallocation	
    delete test;
	
}

// test case for random number being less than or equal to 100
TEST(RandTest, RandLessEqualHundred) {
    // create rand object and assign to pointer
    Rand *test = new Rand();

    double randomNumber = test->evaluate(); // set variable equal to random generated number
    EXPECT_LE(randomNumber, 100); // expect random number to be less than or equal to 100
    EXPECT_TRUE(test->stringify() == to_string(randomNumber)); // expect stringify function return to = string of equation

    // deallocation
    delete test;
}

#endif //__RAND_TEST_HPP__

