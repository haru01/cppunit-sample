// ex. #include "BBB.h"
#include "../src/FizzBuzz.h"
#include <cppunit/extensions/HelperMacros.h>
#include <cppunit/TestAssert.h>
#include <string>
#include <iostream>


class FizzBuzzTest : public CppUnit::TestFixture {

  CPPUNIT_TEST_SUITE(FizzBuzzTest);
  CPPUNIT_TEST(test_CallfizzbuzzWith3_5multipleParamThenReturnNum);
  CPPUNIT_TEST_SUITE_END();

private:

public:

  FizzBuzzTest() {
  }

  ~FizzBuzzTest() {

  }

  virtual void setUp() {
  }

  virtual void tearDown() {
  }

  void test_CallfizzbuzzWith3_5multipleParamThenReturnNum() {
    FizzBuzz fizzBuzz;
    std::string expected("1");
    CPPUNIT_ASSERT_EQUAL( expected, fizzBuzz.fizzbuzz(1) );
  }
};

CPPUNIT_TEST_SUITE_REGISTRATION(FizzBuzzTest);