/**
 * @file
 * @brief Simply test all odd number up to the square root of imput numbers.
 */

#include <iostream>
#include <gmpxx.h>

#include "textbookTester.h"

bool TextbookTester::test(unsigned long long num)
{
  if(num <= 1) return false;
  if(num <= 3) return true;
  if(num%2 == 0 || num%3 == 0) return false;

  unsigned long long p = 5;
  while(p*p < num) {
    if(num%p == 0 || num%(p+2) == 0) {
      return false;
    }
    p += 6;
  }

  return true;
}


bool TextbookTester::test(std::string num_str)
{
  mpz_class num(num_str);
  if(num <= 1) return false;
  if(num <= 3) return true;
  if(num%2 == 0 || num%3 == 0) return false;

  mpz_class p = 5;
  while(p*p < num) {
    if(num%p == 0 || num%(p+2) == 0) {
      return false;
    }
    p += 6;
  }

  return true;
}

 
