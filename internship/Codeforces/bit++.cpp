#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        string st;
        cin >> st;
        if (st == "++X" || st == "X++") {
            ans++;
        } else if (st == "--X" || st == "X--") {
            ans--;
        }
    }
    
    cout << ans << endl;

    return 0;
}