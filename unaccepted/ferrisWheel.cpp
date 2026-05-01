#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define fastio                                                                 \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL)

void solve() {
  int n, x;
  cin >> n >> x;
  vector<int> a(n);
  for (auto &i : a)
    cin >> i;
  sort(a.begin(), a.end());

  vector<bool> visited(n);
  int l = 0;
  int cnt = 0;
  while (l < n) {
    if (visited[l]) {
      l++;
      continue;
    }

    if (l != n - 1) {
      int r = l + 1;
      while (a[l] + a[r] <= n) {
        r++;
      }

      if (a[l] + a[r] <= n) {
        visited[r] = true;
        cnt++;
      } else {
        cnt++;
      }
    } else {
      cnt++;
    }

    l++;
  }

  cout << cnt;
}

signed main() {
  fastio;
  // int t; cin >> t; while (t--)
  solve();
}

/*
WA
*/