#include <cppunit/ui/text/TestRunner.h>
#include <cppunit/TextOutputter.h>

#include <cppunit/extensions/TestFactoryRegistry.h>

int main() {
  CppUnit::TextUi::TestRunner runner;

  runner.addTest(CppUnit::TestFactoryRegistry::getRegistry().makeTest());

  CppUnit::Outputter* outputter =
    new CppUnit::TextOutputter(&runner.result(),std::cout);

  runner.setOutputter(outputter);
  return runner.run() ? 0 : 1;

}