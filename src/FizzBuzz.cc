#include "FizzBuzz.h"
#include <iostream>
#include <sstream>
using namespace std;

FizzBuzz::FizzBuzz(int num) {
  this->num = num;
}


FizzBuzz::~FizzBuzz() {
}

string FizzBuzz::value() {
  if(this->num % 15 == 0) {
    return "FizzBuzz";
  }

  if(this->num % 3 == 0) {
    return "Fizz";
  }

  if(this->num % 5 == 0) {
    return "Buzz";
  }

  stringstream result;
  result << this->num;
  return result.str();
}
