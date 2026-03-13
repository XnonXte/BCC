// TODO: Fix WA

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  int k;
  cin >> k;

  int numEven = (int)(n / 2);
  int numOdd = n - numEven;

  cout << (k <= numOdd) ? (2 * (k - 1) + 1) : (2 * (k - numOdd));
  cout << endl;

  return 0;
}