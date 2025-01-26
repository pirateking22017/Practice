#include <bits/stdc++.h>
using namespace std;

#define fl0(i, n) for (int i = 0; i < n; i++)
#define fl1(i, n) for (int i = 0; i <= n; i++)
using ll = long long;
using vi = vector<int>;

void solve()
{
    int n;
    cin >> n;

    vi a(n), b(n);

    fl0(i, n)
    {
        cin >> a[i];
    }
    fl0(i, n)
    {
        cin >> b[i];
    }

    vector<pair<int, int>> benefits;
    fl0(i, n)
    {
        if (i < n - 1)
        {
            benefits.push_back({a[i] - b[i + 1], i});
        }
        else
        {
            benefits.push_back({a[i], i});
        }
    }

    sort(benefits.rbegin(), benefits.rend());

    int m = 0, s = 0;
    vector<bool> selected(n, false);

    for (const auto &p : benefits)
    {
        int benefit = p.first, i = p.second;
        if (benefit > 0 || i == n - 1)
        {
            m += a[i];
            selected[i] = true;
            if (i < n - 1)
            {
                s += b[i + 1];
            }
        }
    }

    cout << m - s << endl;
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
