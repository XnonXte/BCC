#include <bits/stdc++.h>
using namespace std;

void solve() {
  int a;
  cin >> a;
  int b;
  cin >> b;

  if (a % b == 0) {
    cout << 0 << endl;
  } else {
    cout << fixed << setprecision(0) << ((floor(a / b) + 1) * b) - a << endl;
  }
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