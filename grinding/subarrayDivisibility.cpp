#include <bits/stdc++.h>
using namespace std;

#define BISMILLAH                                                              \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL)

#define int long long
#define endl "\n"

void solve() {
  int n;
  cin >> n;
  vector<int> v(n);
  for (auto &i : v)
    cin >> i;

  int l = 0, r = 0, sum = 0, cnt = 0;
  while (r < n) {
    sum += v[r];

    while (sum > n) {
      sum -= v[l];
      l++;
    }

    if (sum % n == 0) {
      cnt++;
    }

    r++;
  }

  cout << cnt << endl;
}

signed main() {
  BISMILLAH;
  // int t; cin >> t; while (t--)
  solve();
}

/*
TODO: FIX WA
*/