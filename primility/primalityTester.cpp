#include <sstream>

#include "primalityTester.h"


// Use ostreamstring to convert number to a string object
bool PrimalityTester::test(unsigned long long num)
{
  std::ostringstream convert;
  convert << num;
  return test(convert.str());
}
