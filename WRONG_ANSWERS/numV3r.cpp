#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

void solve() {
  ll n;
  cin >> n;
  ll m;
  cin >> m;

  vector<int> v(n);
  for (ll i = 0; i < n; i++) {
    cin >> v[i];
  }

  ll total = 0;

  for (ll i = 0; i < n; i++) {
    for (ll j = 0; j < n; j++) {
      if (i != j && (v[i] + v[j]) % m == 0) {
        total += (v[i] + v[j]);
      }
    }
  }

  cout << total << endl;
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