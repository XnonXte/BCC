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
  vector<int> s(n);
  for (auto &i : s)
    cin >> i;
  sort(s.rbegin(), s.rend());

  // for (auto var : s) {
  //   cout << var << " ";
  // }

  int cnt = 0;
  int l = 0;
  int r = n - 1;
  int tmp = 0;
  while (l < r) {
    tmp += s[r];
    if (tmp < 4) {
      tmp += s[l];
      l++;
    } else if (tmp == 4) {
      l++;
      r--;
      cnt++;
      tmp = 0;
    } else {
      r--;
      cnt++;
      tmp = 0;
    }
  }

  cout << cnt << endl;
}

signed main() {
  BISMILLAH;
  // int t; cin >> t; while (t--)
  solve();
}
