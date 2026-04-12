#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    int k; cin >> k;
    int ans = 0;

    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int x = v[k - 1];

    for (auto num : v) {
        if (num >= x && num > 0) {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}