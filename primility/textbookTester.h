/*-*-C++-*-*/

#ifndef TEXTBOOK_TESTER_H
#define TEXTBOOK_TESTER_H

#include "primalityTester.h"

class TextbookTester : public PrimalityTester {
public:
  TextbookTester(){}
  virtual ~TextbookTester(){}

  virtual bool test(unsigned long long num);
  virtual bool test(std::string num);
};


#endif // TEXTBOOK_TESTER_H
