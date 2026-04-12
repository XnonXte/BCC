#include <string>

std::string reverseString(const std::string &str) {
  std::string st = str;

  int n = str.length();
  int l = 0;
  int r = n - 1;

  while (l < n) {
    st[l] = str[r];
    l++;
    r--;
  }

  return st;
}