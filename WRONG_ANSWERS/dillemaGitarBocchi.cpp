#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

int gcd(int a, int b) {
  if (b == 0)
    return a;
  else
    return gcd(b, a % b);
}

void solve() {
  int n;
  cin >> n;
  vector<ll> v(n);

  if (n == 1) {
    cout << "YES" << endl;
    return;
  }

  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }

  int min_index = distance(v.begin(), min_element(v.begin(), v.end()));
  int min = v[min_index];
  v.erase(v.begin() + min_index);

  if (v.size() == 1) {
    if (gcd(v[0], v[0]) == min) {
      cout << "YES" << endl;
      return;
    }
  } else {
    for (size_t i = 0; i < v.size(); i++) {
      if (v[i] == min) {
        cout << "YES" << endl;
        return;
      }
    }
    for (size_t i = 0; i < v.size() - 1; i++) {
      if (gcd(v[i], v[i + 1]) == min) {
        cout << "YES" << endl;
        return;
      }
    }
  }
  cout << "NO" << endl;
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