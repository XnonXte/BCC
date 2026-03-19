#include <vector>
using namespace std;

int sum(const vector<int> v) {
  int sum = 0;
  for (auto x : v) {
    sum += x;
  }
  return sum;
}

int find_even_index(const vector<int> numbers) {
  if (numbers.size() == 0) {
    return -1;
  }

  int lSum = 0;
  int rSum = sum(numbers);

  for (int i = 0; i < numbers.size(); i++) {
    if (i > 0) {
      lSum += numbers[i - 1];
    }
    rSum -= numbers[i];
    if (lSum == rSum) {
      return i;
    }
  }

  return -1;
}