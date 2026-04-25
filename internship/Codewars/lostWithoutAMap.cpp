#include <vector>

std::vector<int> maps(const std::vector<int> &values) {
  std::vector<int> doubledValues = values;
  for (int i = 0; i < values.size(); i++) {
    doubledValues[i] = values[i] * 2;
  }
  return doubledValues;
}