#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, k;
  cin >> n >> k;
  vector<ll> v(n);

  if (k <= 1) {
    cout << 0 << endl;
    return 0;
  }

  int l = 0;
  int r = 0;
  ll prod = 1;
  int cnt = 0;

  while (r < n) {
    prod *= v[r];

    while (prod > k) {
      prod /= v[l];
      l++;
    }

    cnt += 1;
    r++;
  }

  cout << cnt << endl;

  return 0;
}