#include <bits/stdc++.h>
using namespace std;

#define BISMILLAH                                                              \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL)

#define int long long
#define endl "\n"

bool isDistinct(int x) {
  map<int, int> index;
  for (auto &i : to_string(x)) {
    index[i]++;
    if (index[i] > 1) {
      return false;
    }
  }
  return true;
}

void solve() {
  int y;
  cin >> y;
  do
    y++;
  while (!isDistinct(y));
  cout << y << endl;
}

signed main() {
  BISMILLAH;
  // int t; cin >> t; while (t--)
  solve();
}