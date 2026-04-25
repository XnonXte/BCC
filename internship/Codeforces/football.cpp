#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string st; cin >> st;
    if ((st.find("1111111") != string::npos) || (st.find("0000000") != string::npos)) {
        cout << "YES" << endl;
        return 0;
    } 

    cout << "NO" << endl;
    return 0;
}