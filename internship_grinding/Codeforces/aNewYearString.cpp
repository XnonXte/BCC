#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    string st; cin >> st;

    if (st.find("2025") != string::npos) {
        if (st.find("2026") != string::npos) {
            cout << "0" << endl;
        } else {
            cout << "1" << endl;
        }
    } else if (st.find("2026") != string::npos) {
        cout << "0" << endl;
    } else {
        cout << "0" << endl;
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