#include <bits/stdc++.h>
using namespace std;

int check_sim(vector<int> a, vector<int> b) {
    int count = 0;
    for (size_t i = 0; i < a.size(); i++) {
        if (a[i] == b[i]) {
            count++;
        }
    }
    return count;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> b(n);
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    int ans = 0;

    for (int i = 1; i < n; i++) {
        a[i] = b[i - 1];
        int sim = check_sim(a, b);
        if (sim < ans) {
            ans = sim;
        }
    }

    for (int i = 1; i < n; i++) {
        b[i] = a[i - 1];
        int sim = check_sim(a, b);
        if (sim < ans) {
            ans = sim;
        }
    }
    
    cout << ans << endl;

    return 0;
}

