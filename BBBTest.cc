// ex. #include "BBB.h"

#include <cppunit/extensions/HelperMacros.h>
#include <cppunit/TestAssert.h>

class BBBTest : public CppUnit::TestFixture {

  CPPUNIT_TEST_SUITE(BBBTest);
  CPPUNIT_TEST(test_four);
  CPPUNIT_TEST_SUITE_END();

private:

public:

  BBBTest() {
  }

  ~BBBTest() {

  }

  virtual void setUp() {
  }

  virtual void tearDown() {
  }

  void test_four() {
    CPPUNIT_ASSERT_EQUAL( 0, 0 );
  }
};

CPPUNIT_TEST_SUITE_REGISTRATION(BBBTest); // [10]