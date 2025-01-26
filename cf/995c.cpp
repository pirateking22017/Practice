#include <bits/stdc++.h>
using namespace std;

#define fl0(i, n) for (int i = 0; i < n; i++)
using vi = vector<int>;
using usi = unordered_set<int>;

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;

    vi a(m);
    vi q(k);

    usi known;
    fl0(i, m)
    {
        cin >> a[i];
    }
    fl0(i, k)
    {
        cin >> q[i];
        known.insert(q[i]);
    }

    if (known.size() == n)
    {
        cout << string(m, '1') << '\n';
        return;
    }

    string ans = "";
    for (int i = 0; i < m; ++i)
    {
        bool p = true;

        if (known.find(a[i]) != known.end())
        {
            p = false;
        }
        else
        {

            for (int j = 1; j <= n; ++j)
            {
                if (j != a[i] && known.find(j) == known.end())
                {
                    p = false;
                    break;
                }
            }
        }

        ans += (p ? '1' : '0');
    }

    cout << ans << '\n';
}

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }

    return 0;
}
