#ifndef FIZZBUZZ_H
#define FIZZBUZZ_H
#include <string>

class FizzBuzz {
private:
  int num;

public:
  FizzBuzz(int num);
  ~FizzBuzz();

  std::string value();

};

#endif
