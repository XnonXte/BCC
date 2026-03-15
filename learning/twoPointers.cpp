#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  vector<int> v(n);

  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }

  sort(v.begin(), v.end());

  // Inward traversal
  //   int left = 0;
  //   int right = n - 1;

  //   while (left < right) {
  //     cout << v[left] << " " << v[right] << endl;
  //     left++;
  //     right--;
  //   }

  // Unidirectional traversal
  //   int left = 0;
  //   int right = 0;

  //   while (right < n) {
  //     if (left < (n / 2)) {
  //       cout << v[left] << " ";
  //       left++;
  //     }
  //     cout << v[right] << " ";
  //     right++;
  //   }

  return 0;
}