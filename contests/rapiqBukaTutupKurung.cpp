#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    string st;
    cin >> st;

    if (st.length() % 2 != 0) {
        cout << "NO" << endl;
        return 0;
    }

    bool valid = true;

    for (int i = 0; i < n / 2; i++) {
        if (st[i] == '{' && st[st.length() - i - 1] == '}') {
            continue;
        }     
        else if (st[i] == '(' && st[st.length() - i - 1] == ')') {
            continue;
        }     
        else if (st[i] == '[' && st[st.length() - i - 1] == ']') {
            continue;
        } else {
            valid = false;
            break;
        } 
    }

    if (valid) {
        cout << "YES" << endl;
        return 0;
    }
    cout << "NO" << endl;
    return 0;
}