#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;

  int cnt = 0;
  for (int i = 0; i < n; i += k) {
    if (s.substr(i, k).find("B") != string::npos) {
      cnt++;
    }
  }

  cout << cnt << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    solve();
  }

  return 0;
}