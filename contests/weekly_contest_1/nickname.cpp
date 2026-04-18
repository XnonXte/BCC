#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    
    unordered_map<string, int> nicknames;

    while (t--) {
        string nickname;
        cin >> nickname;

        if (nicknames.count(nickname) == 0) {
            nicknames.insert({nickname, -1});
            cout << nickname << endl;
            continue;
        } else {
            nicknames[nickname]++;
        }

        if (nicknames[nickname] >= nickname.length()) {
            cout << "ERROR" << endl;
        } else {
            int i = nicknames[nickname];
            nickname[i] = toupper(nickname[i]);
            cout << nickname << endl;
        }
    }

    return 0;
}