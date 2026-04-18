#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i]; 
    }

    unordered_set<int> tmp(v.begin(), v.end());

    if (v.size() == tmp.size()) {
        cout << "false" << endl;
    } else {
        cout << "true" << endl;
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