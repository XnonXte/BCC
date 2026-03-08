#include <bits/stdc++.h>
using namespace std;

vector<int> sieveOfEratosthenes(int n)
{
    bool isPrime[n + 1];
    memset(isPrime, true, sizeof(isPrime));
    isPrime[0] = isPrime[1] = false;
    vector<int> primeNumbers;

    for (int i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }

    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) {
            primeNumbers.push_back(i);
        }
    }

    return primeNumbers;
}

bool checkIsAlmostPrime(vector<int> primeNumber, int n) {
    int cnt = 0;
    for (auto num : primeNumber) {
        if (n % num == 0) {
            cnt++;
        }
    }
    return cnt == 2;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    int ans = 0;

    for (int i = 1; i <= n; i++) {
        if (checkIsAlmostPrime(sieveOfEratosthenes(n), i)) {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}