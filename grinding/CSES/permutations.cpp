#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<int> v(n);
    bool b;
    
    for (int i = 0; i < n; i++) {
        v[i] = i + 1; 
    }

    do {
        for (int i = 0; i < n - 1; i++) {
            if (abs(v[i] - v[i + 1]) == 1) {
                b = false;
                break;
            }
            b = true;
        }
        if (b) {
            for (auto x : v) {
                cout << x << " ";
            }
            return 0;
        }
    } while(next_permutation(v.begin(), v.end()));

    cout << "NO SOLUTION" << endl;
    return 0;
}