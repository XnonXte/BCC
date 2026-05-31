#include <bits/stdc++.h>
using namespace std;

int main() {
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);

  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  long long n, x;
  cin >> n >> x;

  vector<long long> v(n), h(n);

  for (long long &a : v) {
    cin >> a;
  }

  for (long long i = 0; i < n; i++) {
    h[i] = v[i] * (n - i);
  }

  sort(h.begin(), h.end());

  long long count = 0;

  for (long long i = 0; i < n; i++) {
    if (x - h[i] >= 0) {
      x -= h[i];
      count++;
    }
  }

  cout << count;

  // for (long long a : h) {
  //     cout << a << ' ';
  // }

  /*
  dp[0] = 1;

  for (long long i = 0; i < n; i++) {
      for (long long j = x - i; j >= 0; j--) {

      }
  }
  */

  return 0;
}