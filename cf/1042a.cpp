#include <bits/stdc++.h>
#include <vector>
using namespace std;

#define fl0(i, n) for (int i = 0; i < n; i++)
#define fl1(i, n) for (int i = 0; i <= n; i++)
using ll = long long;
using vi = vector<int>;
using usi = unordered_set<int>;

// void solve()
// {
//     int n;
//     cin >> n;
//     vector<pair<int, int>> inp(n);
//     fl0(i, n) { cin >> inp[i].first; }
//     fl0(i, n) { cin >> inp[i].second; }
//     int x = 0;
//     // bool f1, f2;
//     // fl0(i, n)
//     // {
//     //     if (inp[i].first > inp[i].second)
//     //         f1 = true;
//     // }
//     // fl0(i, n)
//     // {
//     //     if (inp[i].first < inp[i].second)
//     //         f2 = true;
//     // }

//     fl0(i, n)
//     {
//         vi abc(n);
//         fl0(i, n)
//         {
//             if (inp[i].first != inp[i].second)
//             {
//                 abc[i] = abs(inp[i].first - inp[i].second + 1);
//             }
//             else
//             {
//                 abc[i] = 1;
//             }
//         }
//         x = *max_element(abc.begin(), abc.end());
//     }
//     cout << x << '\n';
// }

void solve()
{
    int n;
    cin >> n;
    int ans = 0;
    vi a(n), b(n);
    fl0(i, n)(cin >> a[i]);
    fl0(i, n)(cin >> b[i]);
    while (true)
    {
        bool f1 = false, f2 = false;
        fl0(i, n)
        {
            if (a[i] > b[i])
                f1 = true;
        }
        fl0(i, n)
        {
            if (a[i] < b[i])
                f2 = true;
        }
        ans++;
        if (f1)
            fl0(i, n)
            {
                if (a[i] > b[i])
                {
                    a[i]--;
                    break;
                }
            }
        if (f1)
            fl0(i, n)
            {
                if (a[i] < b[i])
                {
                    a[i]++;
                    break;
                }
            }
        if (!f1)
            break;
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