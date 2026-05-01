#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define fastio                                                                 \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL)

void solve() {
  int n;
  cin >> n;
  vector<pair<int, int>> v;
  while (n--) {
    int a, b;
    cin >> a >> b;
    v.push_back({a, b});
  }

  sort(v.begin(), v.end(),
       [](pair<int, int> a, pair<int, int> b) { return a.second < b.second; });
  int cnt = 1;
  pair<int, int> last = v[0];
  for (auto &current : v) {
    if (last.second <= current.first) {
      cnt++;
      last = current;
    }
  }

  cout << cnt;
}

signed main() {
  fastio;
  //   int t; cin >> t; while (t--)
  solve();
}

/*

*/
