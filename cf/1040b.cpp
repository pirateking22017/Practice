#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, s;
    cin >> n >> s;

    int sum = 0, c0 = 0, c1 = 0, c2 = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        sum += x;
        if (x == 0)
            c0++;
        else if (x == 1)
            c1++;
        else
            c2++;
    }

    int T = s - sum;

    if (T < 0 || T == 1)
    {

        for (int i = 0; i < c0; i++)
        {
            if (i > 0)
                cout << ' ';
            cout << '0';
        }
        for (int i = 0; i < c2; i++)
        {
            if (c0 > 0 || i > 0)
                cout << ' ';
            cout << '2';
        }
        for (int i = 0; i < c1; i++)
        {
            if (c0 > 0 || c2 > 0 || i > 0)
                cout << ' ';
            cout << '1';
        }
        cout << '\n';
    }
    else
    {
        cout << "-1\n";
    }
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