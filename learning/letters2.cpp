#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  long long kamar[n];
  for (int i = 0; i < n; i++) {
    long long x;
    cin >> x;
    if (i != 0)
      x += kamar[i - 1];
    kamar[i] = x;
  }

  // for (int i:kamar) cout<<i<<endl;
  vector<long long> surat(m);
  long long y = 0;
  for (int i = 0; i < m; i++) {
    cin >> surat[i];
    // cout<<surat[i]<<endl;
    for (int j = y; j < n; j++) {
      if (surat[i] <= kamar[j]) {
        y = j;
        if (j != 0)
          surat[i] -= kamar[j - 1];
        cout << j + 1 << " " << surat[i] << endl;
        break;
      }
    }
  }
}