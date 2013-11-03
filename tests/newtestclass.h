/*
 * File:   newtestclass.h
 * Author: Ivan
 *
 * Created on Nov 3, 2013, 11:54:08 AM
 */

#ifndef NEWTESTCLASS_H
#define	NEWTESTCLASS_H

#include <cppunit/extensions/HelperMacros.h>

class newtestclass : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(newtestclass);

    CPPUNIT_TEST(testSquare_01);
    CPPUNIT_TEST(testSquare_02);
    CPPUNIT_TEST(testSquare_03);
    CPPUNIT_TEST(testSquare_04);
    CPPUNIT_TEST(testSquare_05);
    CPPUNIT_TEST(testSquare_06);

    CPPUNIT_TEST_SUITE_END();

public:
    newtestclass();
    virtual ~newtestclass();
    void setUp();
    void tearDown();

private:
    void testSquare_01();
    void testSquare_02();
    void testSquare_03();
    void testSquare_04();
    void testSquare_05();
    void testSquare_06();
};

#endif	/* NEWTESTCLASS_H */

