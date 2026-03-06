#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n; string c; cin >> n >> c;

    if ((c.find("2025") == string::npos) || (c.find("2026") != string::npos)) cout << 0 << endl;
    else cout << 1 << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) solve();

    return 0;
}