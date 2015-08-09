/*-*-C++-*-*/

#ifndef PRIMALITY_TESTER_H
#define PRIMALITY_TESTER_H

#include <string>

class PrimalityTester {
public:
  PrimalityTester() {}
  virtual ~PrimalityTester() {}

  virtual bool test(unsigned long long num);
  virtual bool test(std::string num) = 0;
};

#endif // PRIMALITY_TESTER_H
