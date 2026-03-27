#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  vector<int> v = {10, 10, 30, 30, 30, 100, 10, 300, 300, 70, 70, 80};
  sort(v.begin(), v.end());

  //* Binary Search
  // int l = 0;
  // int r = v.size() - 1;

  // int target = 9;

  // while (l <= r) {
  //   int mid = l + (r - l) / 2;
  //   if (v[mid] == target) {
  //     cout << mid << endl;
  //     return 0;
  //   }

  //   if (v[mid] < target) {
  //     l = mid + 1;
  //   } else {
  //     r = mid - 1;
  //   }
  // }

  // cout << -1 << endl;

  //* Lower bound
  // int target = 3;
  // int l = 0, r = v.size();
  // while (l < r) {
  //   int mid = l + (r - l) / 2;
  //   if (v[mid] >= target) {
  //     r = mid;
  //   } else {
  //     l = mid + 1;
  //   }
  // }
  // cout << l << endl;

  // ! PAKAI STL
  //* Binary Search
  cout << (binary_search(v.begin(), v.end(), 8) ? "8 ada" : "8 tidak ada")
       << endl;

  //* Lower bound
  cout << *lower_bound(v.begin(), v.end(), 30) << endl;

  //* Upper bound
  cout << *upper_bound(v.begin(), v.end(), 10) << endl;

  //* Equal Range
  cout << *lower_bound(v.begin(), v.end(), 30) << " "
       << *upper_bound(v.begin(), v.end(), 30) << endl;
}