#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
#define fl0(i, n) for (int i = 0; i < n; i++)
#define fl1(i, n) for (int i = 0; i <= n; i++)
using ll = long long;
using vi = vector<int>;
using usi = unordered_set<int>;

void solve()
{
    int n;
    cin >> n;
    vi a(n);
    fl0(i, n) cin >> a[i];

    int ans = accumulate(a.begin(), a.end(), 0);

    while (true)
    {
        if (a.size() == 1)
        {
            ans = max(ans, a[0]);
            break;
        }

        vi diffs;
        for (int i = 0; i < a.size() - 1; i++)
        {
            diffs.push_back(a[i + 1] - a[i]);
        }

        if (accumulate(diffs.begin(), diffs.end(), 0) < 0)
        {
            for (int &x : diffs)
            {
                x = -x;
            }
        }

        ans = max(ans, accumulate(diffs.begin(), diffs.end(), 0));
        reverse(diffs.begin(), diffs.end());
        a = diffs;
    }

    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
