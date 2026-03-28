#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> a, pair<int, int> b) {
  return a.first <= b.first && a.second <= b.second;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  vector<pair<int, int>> v(n);

  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    int y;
    cin >> y;
    v[i] = {x, y};
  }

  sort(v.begin(), v.end(), comp);

  return 0;
}