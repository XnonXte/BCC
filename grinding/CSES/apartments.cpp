#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m, k;
  cin >> n >> m >> k;
  vector<ll> v(n);
  vector<ll> w(m);

  for (auto &i : v)
    cin >> i;
  for (auto &i : w)
    cin >> i;

  sort(v.begin(), v.end());
  sort(w.begin(), w.end());

  int i = 0;
  int j = 0;
  int cnt = 0;

  while (i < m && j < n) {
    int high = v[j] + k;
    int low = v[j] - k;

    if (w[i] <= high && w[i] >= low) {
      cnt++;
      i++;
      j++;
    } else if (w[i] < low) {
      i++;
    } else if (w[i] > high) {
      j++;
    }
  }

  cout << cnt << endl;

  return 0;
}