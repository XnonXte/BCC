#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  ll k;
  cin >> n >> k;

  vector<ll> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];

  if (k <= 1) {
    cout << 0 << '\n';
    return 0;
  }

  ll prod = 1;
  ll cnt = 0;
  int l = 0;
  int r = 0;

  while (r < n) {
    prod *= a[r];

    while (prod >= k) {
      prod /= a[l];
      l++;
    }

    cnt += (r - l + 1);
    r++;
  }

  cout << cnt << '\n';
}