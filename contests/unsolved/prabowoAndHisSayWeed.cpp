#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a; cin >> a;
    int b; cin >> b;

    int p; cin >> p;
    int q; cin >> q;

    pair<int, int> pos = {0, 0};

    while (pos.first < p && pos.second < q) {
        pos.first += a;
        pos.second += b;
    }

    if (pos.first == p && pos.second == q) {
        cout << "YES" << endl;
        return 0;
    }

    pos.first = 0;
    pos.second = 0;

    while (pos.first < p) {
        pos.first += a * 2;
    }

    if (pos.first == p && pos.second == q) {
        cout << "YES" << endl;
        return 0;
    }

    pos.first = 0;
    pos.second = 0;

    while (pos.first < p && pos.second < q) {
        pos.first += a;
        pos.second -= b;
    }

    pos.first = 0;
    pos.second = 0;

    if (pos.first == p && pos.second == q) {
        cout << "YES" << endl;
        return 0;
    } 


    cout << "NO" << endl;
    return 0;
}