#include <bits/stdc++.h>
using namespace std;

// #define LOCAL

using ll = long long;

#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()

#define each(x, a) for (auto &x : a)
#define eachkv(key, value, a) for (const auto &[key, value] : a)

#define println(x) cout << x << endl;
#define print(x, end) cout << x << end;

#define YES cout << "YES\n"
#define NO cout << "NO\n"

#ifdef LOCAL
#define debug(x) cerr << #x << " = " << x << '\n';
#else
#define debug(x)
#endif

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  vector<int> v(n);

  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }

  int s = 0;
  int d = 0;
  bool flag = true;
  int l = 0;
  int r = sz(v) - 1;

  while (l <= r) {
    if (flag) {
      s += max(v[l], v[r]);
    } else {
      d += max(v[l], v[r]);
    }

    v[l] > v[r] ? l++ : r--;

    flag = !flag;
  }

  cout << s << " " << d << endl;

  return 0;
}