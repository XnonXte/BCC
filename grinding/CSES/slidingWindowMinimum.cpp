#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, k;
  cin >> n >> k;
  int x, a, b, c;
  cin >> x >> a >> b >> c;
  vector<ll> v(n);
  v[0] = x;
  for (int i = 1; i < n; i++)
    v[i] = (a * v[i - 1] + b) % c;

  return 0;
}