#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int search(vector<ll> &a, ll target) {
  int n = a.size();
  int l = 0;
  int r = n - 1;
  int mid;

  while (l <= r) {
    mid = l + (r - l) / 2;
    if (a[mid] == target) {
      return mid;
    }

    if (a[mid] > target) {
      r = mid - 1;
    } else {
      l = mid + 1;
    }
  }

  return -1;
}

void fill(vector<ll> &v, ll low, ll high) {
  if (!v.empty()) {
    v.clear();
  }
  for (int i = low; i <= high; i++) {
    v.push_back(i);
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m;
  cin >> n >> m;
  vector<ll> a(n);
  for (auto &i : a)
    cin >> i;
  vector<ll> b(m);
  for (auto &i : b)
    cin >> i;

  ll dorm = 1;
  ll j = 0;
  ll i = 0;
  ll low = 1;
  ll high = a[j];
  vector<ll> v;
  fill(v, low, high);

  while (i < m) {
    int mid = search(v, b[i]);
    if (mid == -1) {
      dorm++;
      low = low + a[j];
      high = high + a[j + 1];
      fill(v, low, high);
      j++;
    } else {
      cout << dorm << " " << mid + 1 << endl;
      i++;
    }
  }

  return 0;
}