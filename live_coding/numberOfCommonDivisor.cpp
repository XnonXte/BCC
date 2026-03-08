// #include <bits/stdc++.h>
// using namespace std;

// int findGCD(int a, int b) {
//     if (a == 0)
//         return b;
//     return findGCD(b % a, a);
// }

// vector<int> primeFactors(int n) {
//     vector<int> factors;

//     while (n % 2 == 0) {
//         factors.push_back(2);
//         n = n / 2;
//     }

//     for (int i = 3; i * i <= n; i = i + 2) {
//         while (n % i == 0) {
//             factors.push_back(i);
//             n = n / i;
//         }
//     }

//     if (n > 2)
//         factors.push_back(n);

//     return factors;
// }

// void solve() {
//     int a; cin >> a;
//     int b; cin >> b;

//     int gcd = findGCD(a, b);
//     vector<int> v = primeFactors(gcd);
//     unordered_set<int> s(v.begin(), v.end());

//     int ans = 1;
//     for (auto n : s) {
//         ans *= (count(v.begin(), v.end(), n) + 1);
//     }

//     cout << ans << endl;
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;

//     while (t--) {
//         solve();
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long a, b;
    cin >> a >> b;

    long long g = __gcd(a, b);
    long long ans = 1;

    for (long long i = 2; i * i <= g; i++) {
        int cnt = 0;
        while (g % i == 0) {
            g /= i;
            cnt++;
        }
        if (cnt) ans *= (cnt + 1);
    }

    if (g > 1) ans *= 2;

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) solve();
}