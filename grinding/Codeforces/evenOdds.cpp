// TODO: This code is inefficient, maybe remove the two while loops?

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    int k; cin >> k;
    vector<int> v(n);
    
    int pos = 0;
    int i = 1;
    int j = 2;

    while (i <= n) {
        v[pos] = i;
        i += 2;
        pos++;
    }

    while (j <= n) {
        v[pos] = j;
        j += 2;
        pos++;
    }

    cout << v[k - 1] << endl;

    return 0;
}