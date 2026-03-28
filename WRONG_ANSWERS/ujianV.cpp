#include <bits/stdc++.h>
using namespace std;

void recurPermute(int index, string &s, vector<string> &ans) {
  if (index == s.size()) {
    ans.push_back(s);
    return;
  }
  for (int i = index; i < s.size(); i++) {
    swap(s[index], s[i]);
    recurPermute(index + 1, s, ans);
    swap(s[index], s[i]);
  }
}

vector<string> findPermutation(string &s) {
  vector<string> ans;
  recurPermute(0, s, ans);
  sort(ans.begin(), ans.end());
  return ans;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string n;
  cin >> n;
  int k;
  cin >> k;

  if (stoi(n) % k == 0) {
    cout << "Yes" << endl;
    return 0;
  }

  vector<string> v = findPermutation(n);

  for (size_t i = 0; i < v.size(); i++) {
    string perm = v[i];
    if (perm.at(0) != '0' && stoi(perm) % k == 0) {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;
  return 0;
}