#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string st; cin >> st;

    for (auto c : st) {
        c = tolower(c);
        if (c != 'a' && c != 'i' && c != 'u' && c != 'e' && c != 'o' && c != 'y') {
            cout << '.' << c;
        }
    }

    return 0;
}