#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    pair<int, int> p;

    p.first = (int) n / 2;
    p.second = (int) n / 2;

    int i = 1;

    if (n % 2 != 0 || n == 2) {
        cout << "NO" << endl;
    }

    while (p.first % 2 != 0 && p.second % 2 != 0) {
        p.first += i;
        p.second += -i;
        i++;
    }

    cout << "YES" << endl;
    
    return 0;
}