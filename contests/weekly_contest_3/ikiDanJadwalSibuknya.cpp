#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  ll k;
  cin >> n >> k;

  vector<ll> v(n);
  for (auto &i : v)
    cin >> i;

  map<ll, int> index;

  int l = 0;
  ll sum = 0;
  int maxLen = 0;

  for (int r = 0; r < n; r++) {
    index[v[r]]++;
    sum += v[r];

    while (index[v[r]] > 1 || sum > k) {
      index[v[l]]--;
      if (index[v[l]] == 0)
        index.erase(v[l]);
      sum -= v[l];
      l++;
    }

    maxLen = max(maxLen, r - l + 1);
  }

  cout << maxLen << '\n';
}