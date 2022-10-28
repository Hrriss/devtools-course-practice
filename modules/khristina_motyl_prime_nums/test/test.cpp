// Copyright 2022 Khristina Motyl
#include <gtest/gtest.h>

#include <vector>

#include "include/simple_num.h"

TEST(Simple_num_test, testThrow) {
  ASSERT_ANY_THROW(simple_numbers::_Calculate(12, 5));
}

TEST(Simple_num_test, test1) {
  std::vector<int> expectedResult{13, 17, 19, 23, 29};
  ASSERT_EQ(simple_numbers::_Calculate(12, 30), expectedResult);
}

TEST(Simple_num_test, test2) {
  std::vector<int> expectedResult{2, 3, 5, 7, 11};
  ASSERT_EQ(simple_numbers::_Calculate(2, 11), expectedResult);
}

TEST(Simple_num_test, test3) {
  std::vector<int> expectedResult{2, 3};
  ASSERT_EQ(simple_numbers::_Calculate(2, 3), expectedResult);
}

TEST(Simple_num_test, test4) {
  std::vector<int> expectedResult{5, 7, 11};
  ASSERT_EQ(simple_numbers::_Calculate(4, 12), expectedResult);
}

TEST(Simple_num_test, test5) {
  std::vector<int> expectedResult{101, 103, 107, 109};
  ASSERT_EQ(simple_numbers::_Calculate(100, 110), expectedResult);
}

TEST(Simple_num_test, test6) {
  std::vector<int> expectedResult{41, 43, 47};
  ASSERT_EQ(simple_numbers::_Calculate(40, 47), expectedResult);
}

TEST(Simple_num_test, test7) {
  std::vector<int> expectedResult{173, 179};
  ASSERT_EQ(simple_numbers::_Calculate(173, 179), expectedResult);
}

TEST(Simple_num_test, test8) {
  std::vector<int> expectedResult{53, 59, 61, 67, 71};
  ASSERT_EQ(simple_numbers::_Calculate(50, 72), expectedResult);
}
