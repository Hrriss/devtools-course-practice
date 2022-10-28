// Copyright 2022 Khristina Motyl
#include "include/prime_num.h"

#include <gtest/gtest.h>

#include <utility>
#include <vector>

std::vector<int> simple_numbers::Calculate(int start, int end) {
  if (end < start || start < 1 || end < 2) {
    throw std::invalid_argument("Wrong input!");
  }
  std::vector<int> res;
  std::vector<bool> info(end + 1, true);
  info[0] = false;
  info[1] = false;
  for (int i = 2; i <= end; i++) {
    if (info[i] == true) {
      for (int j = i * i; j <= end; j += i) {
        info[j] = false;
      }
    }
  }
  for (int i = start; i <= end; i++) {
    if (info[i] == true) {
      res.push_back(i);
    }
  }
  return res;
}

void simple_numbers::Print(int start, int end) {
  std::vector<int> simple_nums = Calculate(start, end);
  std::cout << "Simple numbers start: " << start << "  end: " << end
            << std::endl;
  std::cout << "{ ";
  for (int i = 0; i < static_cast<int>(simple_nums.size()); i++) {
    std::cout << simple_nums[i] << " ";
  }
  std::cout << " }" << std::endl;
}
