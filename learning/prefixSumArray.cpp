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

  vector<int> ps(n);
  ps[0] = v[0];

  for (int i = 1; i < n; i++) {
    ps[i] = ps[i - 1] + v[i];
  }

  each(x, ps) { print(x, " "); }

  return 0;
}