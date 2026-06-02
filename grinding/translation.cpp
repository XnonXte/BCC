#include <bits/stdc++.h>
using namespace std;

#define BISMILLAH \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL)

#define int long long
#define endl "\n"

void solve() {
  string s; cin >> s;
  string t; cin >> t;

  reverse(s.rbegin(), s.rend());

  if (s == t) {
    cout << "YES";
  } else {
    cout << "NO";
  }
}

signed main() {
  BISMILLAH;
  // int t; cin >> t; while (t--)
  solve();
}