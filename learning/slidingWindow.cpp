#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n = 5;
  int k = 3;
  vector<int> v = {5, 2, -1, 0, 3};
  int sum = 0;
  for (int i = 0; i < k; i++) {
    sum += v[i];
  }
  int maxSum = sum;
  for (int i = k; i < n; i++) {
    sum -= v[i - k];
    sum += v[i];
    maxSum = max(sum, maxSum);
  }
  cout << maxSum << endl;

  return 0;
}