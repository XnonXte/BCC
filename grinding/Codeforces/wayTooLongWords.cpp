#include <bits/stdc++.h>
using namespace std;

void solve() {
    string st;
    cin >> st;

    int len = st.length();
    if (len > 10) {
        cout << st[0] << len - 2 << st[len - 1] << endl;
    } else {
        cout << st << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}