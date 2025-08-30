#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    vector<ll> a(n + 2, 0);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    vector<ll> pref(n + 2, 0);
    vector<ll> suf(n + 3, 0);

    pref[1] = a[1];
    for (int i = 2; i <= n; i++)
    {
        pref[i] = max(pref[i - 1], a[i]);
    }

    for (int i = n; i >= 1; i--)
    {
        suf[i] = suf[i + 1] + a[i];
    }

    for (int k = 1; k <= n; k++)
    {
        int pos = n - k + 1;
        ll ans = suf[pos + 1];
        ans = max(ans + pref[pos], suf[pos]);
        cout << ans << " ";
    }
    cout << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int tests;
    cin >> tests;
    while (tests--)
    {
        solve();
    }

    return 0;
}
