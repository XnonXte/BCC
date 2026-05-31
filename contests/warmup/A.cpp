#include <bits/stdc++.h>
using namespace std;

#define BISMILLAH                                                              \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL)

#define int long long
#define endl "\n"

void solve() {
  int n, x, y;
  cin >> n >> x >> y;
  vector<int> a(n);
  for (auto &i : a)
    cin >> i;

  int cnt = 0;
  for (auto &p : a) {
    if (p >= x) {
      cnt++;
    }
  }

  if (cnt >= y) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}

signed main() {
  BISMILLAH;
  // int t; cin >> t; while (t--)
  solve();
}