#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n;
    ll x, y;
    cin >> n >> x >> y;

    vector<ll> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    ll sum = accumulate(a.begin(), a.end(), 0LL);
    ll L = sum - y, U = sum - x;

    vector<ll> sorted;
    ll ans = 0;

    for (int i = 0; i < n; ++i)
    {
        ll low = L - a[i];
        ll high = U - a[i];
        auto it_low = lower_bound(sorted.begin(), sorted.end(), low);
        auto it_high = upper_bound(sorted.begin(), sorted.end(), high);
        ans += distance(it_low, it_high);
        sorted.insert(lower_bound(sorted.begin(), sorted.end(), a[i]), a[i]);
    }

    cout << ans << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }

    return 0;
}
