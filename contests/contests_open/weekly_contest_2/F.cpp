#include <bits/stdc++.h>
using namespace std;

#define BISMILLAHIRRAHMANIRRAHIM                                               \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL)

#define int long long
#define EN "\n"
#define CO cout <<
#define CI cin >>
#define II(x)                                                                  \
  int x;                                                                       \
  CI x
#define SS(s)                                                                  \
  string s;                                                                    \
  CI s

#define FOR(i, start, n) for (int i = start; i < n; i++)
#define RFOR(i, start, n) for (int i = start; i >= n; i--)
#define FORE(i, x) for (auto &i : x)
#define FOREP(x, y, z) for (auto &[x, y] : z)
#define ALL(x) x.begin(), x.end()
#define SZ(x) x.size()
#define SORT(x) sort(ALL(x))
#define RSORT(x) sort(x.rbegin(), x.rend())
#define REVERSE(x) reverse(ALL(x))
#define CIVEC(vec) FORE(i, vec) CI i
#define CIVEC1(vec) FOR(i, 1, SZ(vec)) CI vec[i]
#define CIVEC2(vec) FORE(i, vec) CIVEC(i)
#define CIVEC21(vec) FOR(i, 1, SZ(vec)) CIVEC1(vec[i])
#define COVEC(vec)                                                             \
  FORE(i, vec) CO i << " ";                                                    \
  CO EN
#define COVEC1(vec)                                                            \
  FOR(i, 1, SZ(vec)) CO vec[i] << " ";                                         \
  CO EN
#define COVECP(z)                                                              \
  FOREP(x, y, z) CO x << " " << y << EN;                                       \
  CO EN
#define COVEC2(vec) FORE(i, vec) COVEC(i)
#define COVEC21(vec) FOR(i, 1, SZ(vec)) COVEC1(vec[i])
#define FOUND(i, x) i.find(x) != i.end()

#define PB push_back
#define EB emplace_back
#define P pair
#define PII P<int, int>
#define V vector
#define VI V<int>
#define VB V<bool>
#define VVI V<V<int>>
#define VVB V<V<bool>>
#define VPII V<PII>
#define F first
#define S second

#define M map
#define MII M<int, int>
#define SI set<int>
#define PQ priority_queue
#define PQI PQ<int>
#define RPQI PQ<int, VI, greater<int>> pq;

#define MOD 1000000007

void solve() {
  II(n);
  VI v(n);
  FOR(i, 0, n) {
    II(tmp);
    tmp %= MOD;
    v[i] = tmp;
  }
  SORT(v);

  VI a;
  int target = v[0];
  FOR(i, 1, n) {
    if (v[i] % target == 0)
      a.push_back(v[i]);
  }

  int res = 0;
  FORE(x, a) { res = gcd(res, x); }

  CO((res == target) ? "YES" : "NO") << EN;
}

signed main() {
  BISMILLAHIRRAHMANIRRAHIM;
  II(t);
  while (t--)
    solve();
}