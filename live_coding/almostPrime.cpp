#include <bits/stdc++.h>
using namespace std;

vector<int> sieveOfEratosthenes(int n)
{
    bool is_prime[n + 1];
    memset(is_prime, true, sizeof(is_prime));
    is_prime[0] = is_prime[1] = false;
    vector<int> primeNumbers;

    for (int p = 2; p * p <= n; p++) {
        if (is_prime[p]) {
            for (int i = p * p; i <= n; i += p) {
                is_prime[i] = false;
            }
        }
    }

    for (int i = 2; i <= n; i++) {
        if (is_prime[i]) {
            primeNumbers.push_back(i);
        }
    }

    return primeNumbers;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    int ans = 0;

    for (int i = 1; i <= n; i++) {
        vector<int> primeNumbers = sieveOfEratosthenes(i);
        int cnt = 0;
        for (int j = 0; j < primeNumbers.size(); j++) {
            if (cnt == 2) {
                ans++;
                cnt = 0;
            }
            if (i % primeNumbers[j] == 0) {
                cnt++;
            }
        }      
    }

    cout << ans << endl;

    return 0;
}