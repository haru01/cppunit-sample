#include "FizzBuzz.h"
#include <iostream>
#include <sstream>
using namespace std;

FizzBuzz::FizzBuzz()
{
}


FizzBuzz::~FizzBuzz()
{
}

string FizzBuzz::fizzbuzz(int num)
{
  stringstream result;
  result << num;
  return result.str();
}
