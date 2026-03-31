#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  set<ll> s;

  for (int i = 0; i < n; i++) {
    ll tmp;
    cin >> tmp;
    s.insert(tmp);
  }

  cout << s.size() << endl;

  return 0;
}