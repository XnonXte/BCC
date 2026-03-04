#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n; cin >> n;
    vector<long long> v(n);
    
    for (int i = 0; i < n; i++) {
        cin >> v[i]; 
    }
 
    long long tmp = v[0];
    long long ans = 0;
 
    for (int i = 1; i < n; i++) {
        if (v[i] < tmp) {
            int diff = tmp - v[i];
            ans += diff;
            v[i] += diff;
        }
        tmp = v[i];
    }
 
    cout << ans << endl;
 
    return 0;
}