#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    int ans = 0;

    while (t--) {
        int n = 3;
        vector<int> v(n);

        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        if (count(v.begin(), v.end(), 1) >= 2) {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}