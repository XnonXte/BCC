#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int n, len;
  cin >> n;
  len = n - 1;
  vector<int> v(len);

  for (int i = 0; i < len; i++) {
    cin >> v[i];
  }

  sort(v.begin(), v.end());

  for (int i = 0; i < len; i++) {
    if (i == len - 1) {
      if (v[i] < n) {
        cout << n << endl;
        break;
      }
      cout << n - 1 << endl;
    } else if (v[i + 1] != v[i] + 1) {
      cout << v[i] + 1 << endl;
      break;
    }
  }

  return 0;
}
