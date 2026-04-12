#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string n;
  cin >> n;
  int ans = 1;
  int tmp = ans;
  char c = n[0];

  for (size_t i = 1; i < n.size(); i++) {
    if (c == n[i]) {
      tmp++;
      if (tmp > ans) {
        ans = tmp;
      }
    } else {
      tmp = 1;
    }
    c = n[i];
  }

  cout << ans << endl;

  return 0;
}