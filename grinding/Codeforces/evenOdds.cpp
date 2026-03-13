#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  ll n;
  cin >> n;
  ll k;
  cin >> k;

  ll numOdd = 1 + 2 * (k - 1);
  ll numEven = 2 * (k - (n / 2));

  if (n % 2 == 0) {
    if (k <= (n / 2)) {
      cout << numOdd << endl;
    } else {
      cout << numEven << endl;
    }
  } else {
    if (k <= (ll)(n / 2 + 1)) {
      cout << numOdd << endl;
    } else {
      cout << numEven - 2 << endl;
    }
  }

  return 0;
}