#include <iostream>
#include <gmpxx.h>

#include "lucasLehmerTester.h"

bool LucasLehmerTester::test(std::string num_str)
{
  int ord = order(num_str);
  if(!normalTester_.test(ord)) return false;

  std::cout <<num_str <<" passed preliminary test. " <<std::endl;

  mpz_class num(num_str);
  mpz_class s(4);

  for(int i = 0; i < ord-2; i++) {
    s = (s * s - 2) % num;
  }

  return s==0;
}

int LucasLehmerTester::order(std::string num_str)
{
  mpz_class num(num_str);
  std::string binary_string = num.get_str(2);
  for(size_t i = 0; i < binary_string.size(); i++) {
    if(binary_string[i] != '1') {
      return 0;
    }
  }
  return binary_string.size();
}


