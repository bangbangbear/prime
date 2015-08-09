/*-*-C++-*-*/
/**
 * @file lucasLehmerTester.h
 *
 * @brief Lucas Lehmer algorithm, which is a special alogrithm to test
 * Mersenne numbers. This algorithm is based on the following theorem:
 * 
 *   M_p is prime if and only if
 *      s_{p-2} = 0 (mod M_p), where
 *      s_{i+1} = s_i * s_i - 2 with s_0 = 4.
 *
 * 
 */

#ifndef LUCAS_LEHMER_TESTER
#define LUCAS_LEHMER_TESTER

#include "primalityTester.h"
#include "textbookTester.h"

class LucasLehmerTester : public PrimalityTester {
public:
  LucasLehmerTester() {}
  ~LucasLehmerTester() {}

  virtual bool test(std::string num_str);
protected:

  /**
   * return n if num is in 2^n-1 format, else return 0.
   */
  virtual int order(std::string num_str);

  TextbookTester normalTester_;
};
  


#endif // LUCAS_LEHMER_TESTER
