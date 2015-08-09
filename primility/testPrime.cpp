#include <iostream>

#include "primalityTester.h"
#include "textbookTester.h"
#include "lucasLehmerTester.h"

void test(PrimalityTester &t, unsigned long long num)
{
  std::cout << num << " "
            << (t.test(num) ? "is " : "is not ") <<"a prime."
            << std::endl;
}

void test(PrimalityTester &t, std::string num)
{
  std::cout << num << " " 
            << (t.test(num) ? "is " : "is not ") <<"a prime."
            << std::endl;
}


int main(int argc, char *argv[])
{
  TextbookTester t1;

  test(t1, 1023);
  test(t1, 1234567);
  test(t1, "8191");
  test(t1, "2147483647");
  test(t1, "2305843009213");

  std::cout <<"Mersenne Tester (Lucas-LehmerTester): " <<std::endl;
  LucasLehmerTester t2;
  test(t2, 1023);
  test(t2, 1234567);
  test(t2, "1023"); // 2^10-1
  test(t2, "2147483647"); // 2^31-1
  test(t2, "140737488355327"); // 2^67-1
  test(t2, "170141183460469231731687303715884105727"); //2^127-1
  return 0;
}
