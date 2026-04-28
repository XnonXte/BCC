#include <bits/stdc++.h>
using namespace std;

#define FASTIO                                                                 \
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
#define MOD 1000000007

VI parent, length;

void make_set(int v) {
  parent[v] = v;
  length[v] = 1;
}

int find_set(int v) {
  if (v == parent[v])
    return v;
  return parent[v] = find_set(parent[v]);
}

void union_sets(int a, int b) {
  a = find_set(a);
  b = find_set(b);
  if (a != b) {
    if (length[a] < length[b])
      swap(a, b);
    parent[b] = a;
    length[a] += length[b];
  }
}

void solve() {
  II(n);
  parent.resize(n + 1);
  length.resize(n + 1);
  VI arr(n + 1);
  V<char> color(n + 1);
  VI total(n + 1);
  FOR(i, 1, n + 1) {
    cin >> arr[i];
    make_set(i);
  }
  FOR(i, 1, n + 1) { cin >> color[i]; }
  FOR(i, 1, n + 1) { union_sets(i, arr[i]); }
  FOR(i, 1, n + 1) { total[find_set(i)] += color[i] == '1' ? 0 : 1; }
  FOR(i, 1, n + 1) { CO total[find_set(i)] << " "; }
  CO EN;
}

signed main() {
  FASTIO;
  // II(t);
  // while (t--)
  solve();
}

/*

*/