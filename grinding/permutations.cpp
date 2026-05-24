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

  if (n == 1) {
    cout << n << endl;
    return;
  }

  if (n % 2 == 0 && (abs(n - 1) == 1)) {
    cout << "NO SOLUTION" << endl;
  } else if (n % 2 != 0 && abs(((n - 1) - 1) == 1)) {
    cout << "NO SOLUTION" << endl;
  } else {
    for (int i = 2; i <= n; i += 2) {
      cout << i << endl;
    }
    for (int i = 1; i <= n; i += 2) {
      cout << i << endl;
    }
  }
}

signed main() {
  BISMILLAH;
  // int t; cin >> t; while (t--)
  solve();
}