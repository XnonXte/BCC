#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, k, x, a, b, c;
  cin >> n >> k;
  cin >> x >> a >> b >> c;
  vector<ll> v(n);

  v[0] = (x);
  for (int i = 1; i < n; i++)
    v[i] = ((a * v[i - 1] + b) % c);

  ll sum = 0;

  for (int i = 0; i < k; i++)
    sum += v[i];

  ll ans = sum;

  for (int i = k; i < n; i++) {
    sum += v[i];
    sum -= v[i - k];
    ans = ans ^ sum;
  }

  cout << ans << endl;

  return 0;
}