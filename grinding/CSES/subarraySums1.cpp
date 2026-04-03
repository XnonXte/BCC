#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, x;
  cin >> n >> x;
  vector<ll> v(n);
  for (auto &i : v)
    cin >> i;

  ll sum = 0;
  ll cnt = 0;
  int l = 0;
  int r = 0;

  while (r < n) {
    sum += v[r];

    while (sum > x) {
      sum -= v[l];
      l++;
    }

    if (sum == x) {
      cnt++;
    }

    r++;
  }

  cout << cnt << endl;

  return 0;
}