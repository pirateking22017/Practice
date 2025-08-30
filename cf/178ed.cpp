#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int t;
    cin >> t;
    vector<int> ns(t);
    vector<vector<ll>> arr(t);
    int nmax = 0;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        ns[i] = n;
        nmax = max(nmax, n);
        arr[i].resize(n);
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    // buidl sieve
    const int SIEVE_MAX = 9000000;
    vector<char> isprime(SIEVE_MAX + 1, true);
    isprime[0] = isprime[1] = false;
    vector<int> prm;
    prm.reserve(nmax);

    for (int i = 2; i <= SIEVE_MAX; i++) {
        if (isprime[i]) {
            prm.push_back(i);
            if ((int)prm.size() >= nmax) break;
            if (1LL * i * i <= SIEVE_MAX) {
                for (int j = i * i; j <= SIEVE_MAX; j += i) {
                    isprime[j] = false;
                }
            }
        }
    }

    //prefix sum prime
    vector<ll> Psum(nmax + 1, 0);
    for (int i = 1; i <= nmax; i++) {
        Psum[i] = Psum[i - 1] + prm[i - 1];
    }

    // Process each test case
    for (int ti = 0; ti < t; ti++) {
        int n = ns[ti];
        auto& a = arr[ti];
        sort(a.begin(), a.end(), greater<ll>());

        ll A = 0;
        int kmax = 0;
        for (int k = 1; k <= n; k++) {
            A += a[k - 1];
            if (A >= Psum[k]) {
                kmax = k;
            }
        }
        cout << (n - kmax) << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solve();
    return 0;
}
