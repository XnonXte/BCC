#include <bits/stdc++.h>

int findOdd(const std::vector<int> &numbers) {
  std::unordered_map<int, int> ump;

  for (int i = 0; i < numbers.size(); i++) {
    if (ump.find(numbers[i]) == ump.end()) {
      ump[numbers[i]] = 1;
    } else {
      ump[numbers[i]]++;
    }
  }

  int tmp = 0;
  int ans;
  for (auto const &number : ump) {
    if (number.second > tmp && number.second % 2 != 0) {
      tmp = number.second;
      ans = number.first;
    }
  }

  return ans;
}