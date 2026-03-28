#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m;
  cin >> n >> m;
  vector<int> murid(n);
  vector<int> stok(m);

  for (auto &i : murid)
    cin >> i;
  for (auto &i : stok)
    cin >> i;

  sort(murid.begin(), murid.end());
  sort(stok.begin(), stok.end());

  map<int, int> gudang;

  for (auto &i : stok)
    gudang[i]++;

  int cnt = 0;

  for (auto &i : murid) {
    if (gudang.find(i) != gudang.end()) {
      gudang[i]--;
      if (gudang[i] == 0)
        gudang.erase(i);
      cnt++;
    } else if (gudang.find(i + 1) != gudang.end()) {
      gudang[i + 1]--;
      if (gudang[i + 1] == 0)
        gudang.erase(i + 1);
      cnt++;
    }
  }

  cout << cnt << endl;

  return 0;
}