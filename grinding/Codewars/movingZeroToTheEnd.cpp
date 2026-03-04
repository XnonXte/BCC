#include <bits/stdc++.h>
using namespace std;

std::vector<int> move_zeroes(const std::vector<int>& input) {
  int n = input.size();
  vector<int> tmp(n);
  
  int pos = 0;
  for (int i = 0; i < n; i++) {
    if (input[i] != 0) {
      tmp[pos] = input[i];
      pos++;
    }
  }
  
  return tmp;
}