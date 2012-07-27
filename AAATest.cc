// ex. #include "XXX.h"

#include <cppunit/extensions/HelperMacros.h>
#include <cppunit/TestAssert.h>

class AAATest : public CppUnit::TestFixture {
  CPPUNIT_TEST_SUITE(AAATest);
  CPPUNIT_TEST(test_one);
  CPPUNIT_TEST(test_two);
  CPPUNIT_TEST(test_three);
  CPPUNIT_TEST(test_four);
  CPPUNIT_TEST(test_five);

  CPPUNIT_TEST_SUITE_END();

private:
public:
  AAATest() {
  }

  ~AAATest() {

  }

  virtual void setUp() {
  }

  virtual void tearDown() {
  }

  void test_one() {
    CPPUNIT_ASSERT( 0 == 0 );
  }

  void test_two() {
    CPPUNIT_ASSERT_MESSAGE( "0 is not equal to 1", 0 == 0 );
  }

  void test_three() {
    // CPPUNIT_FAIL( "never reached here!" );
  }

  void test_four() {
    CPPUNIT_ASSERT_EQUAL( 0, 0 );
  }

  void test_five() {
    CPPUNIT_ASSERT_EQUAL_MESSAGE( "1 is not equal to 0", 0, 0 );
  }

  void test_six() {
    CPPUNIT_ASSERT_DOUBLES_EQUAL( 1.23, 1.23, 0.001 );
  }
};

/*
 * register test suite
 */
CPPUNIT_TEST_SUITE_REGISTRATION(AAATest);