// ex. #include "BBB.h"
#include "../src/FizzBuzz.h"
#include <cppunit/extensions/HelperMacros.h>
#include <cppunit/TestAssert.h>
#include <string>
#include <iostream>


class FizzBuzzTest : public CppUnit::TestFixture {

  CPPUNIT_TEST_SUITE(FizzBuzzTest);
  CPPUNIT_TEST(test_ReturnNumWhenfizzbuzzWithNot3multipleAndNot5nultiple);
  CPPUNIT_TEST(test_ReturnFizzWhenfizzbuzzWith3multiple);
  CPPUNIT_TEST(test_ReturnBuzzWhenfizzbuzzWith5multiple);
  CPPUNIT_TEST(test_ReturnFizzBuzzWhenfizzbuzzWith15multiple);
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

  void test_ReturnNumWhenfizzbuzzWithNot3multipleAndNot5nultiple() {
    FizzBuzz fizzBuzz(1);
    std::string expected("1");
    CPPUNIT_ASSERT_EQUAL(expected, fizzBuzz.value());
  }

  void test_ReturnFizzBuzzWhenfizzbuzzWith15multiple() {
    FizzBuzz fizzBuzz(15);
    std::string expected("FizzBuzz");
    CPPUNIT_ASSERT_EQUAL(expected, fizzBuzz.value());
  }

  void test_ReturnFizzWhenfizzbuzzWith3multiple() {
    FizzBuzz fizzBuzz(6);
    std::string expected("Fizz");
    CPPUNIT_ASSERT_EQUAL(expected, fizzBuzz.value());
  }

  void test_ReturnBuzzWhenfizzbuzzWith5multiple() {
    FizzBuzz fizzBuzz(10);
    std::string expected("Buzz");
    CPPUNIT_ASSERT_EQUAL(expected, fizzBuzz.value());
  }

};

CPPUNIT_TEST_SUITE_REGISTRATION(FizzBuzzTest);