/*
 * File:   newtestclass.cpp
 * Author: Ivan
 *
 * Created on Nov 3, 2013, 11:54:08 AM
 */

#include "newtestclass.h"


CPPUNIT_TEST_SUITE_REGISTRATION(newtestclass);

newtestclass::newtestclass() {
}

newtestclass::~newtestclass() {
}

void newtestclass::setUp() {
}

void newtestclass::tearDown() {
}

double square(double number);

void newtestclass::testSquare_01() {
    double number = 5.0;
    double result = square(number);
    double expected = 25.0;
    double delta = 0.001;
    CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("Input   : 5", expected, result, delta);
}

void newtestclass::testSquare_02() {
    double number = 1.0;
    double result = square(number);
    double expected = 1;
    double delta = 0.001;
    CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("Input   : 1", expected, result, delta);
}

void newtestclass::testSquare_03() {
    double number = 0.0;
    double result = square(number);
    double expected = 0.0;
    double delta = 0.001;
    CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("Input   : 0", expected, result, delta);
}

void newtestclass::testSquare_04() {
    double number = -1.0;
    double result = square(number);
    double expected = 1.0;
    double delta = 0.001;
    CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("Input   : -1", expected, result, delta);
}

void newtestclass::testSquare_05() {
    double number = -2.0;
    double result = square(number);
    double expected = 4.0;
    double delta = 0.001;
    CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("Input   : -2", expected, result, delta);
}

void newtestclass::testSquare_06() {
    double number = 399995.0;
    double result = square(number);
    double expected = 159996000025.0;
    double delta = 0.001;
    CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("Input   : 399 995", expected, result, delta);
}
