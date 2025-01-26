#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;
#define fl0(i, n) for (int i = 0; i < n; i++)
#define fl1(i, n) for (int i = 0; i <= n; i++)
using ll = long long;
using vi = vector<int>;
using usi = unordered_set<int>;

struct cust
{
    int a, b;
};

bool compare(cust c1, cust c2)
{
    return c1.a < c2.a;
}

void solve()
{

    int n, k;
    cin >> n >> k;

    vector<cust> c(n);
    fl0(i,n)
    {
        cin >> c[i].a;
    }
    for (int i = 0; i < n; ++i)
    {
        cin >> c[i].b;
    }

    sort(c.begin(), c.end(), compare);

    vi possible_prices;

    for (int i = 0; i < n; ++i)
    {
        possible_prices.push_back(c[i].a);
        possible_prices.push_back(c[i].b);
    }

    sort(possible_prices.begin(), possible_prices.end());

    int maxE = 0;

    for (int price : possible_prices)
    {
        int plus = 0, minus = 0;

        for (int i = 0; i < n; ++i)
        {
            if (c[i].a >= price)
            {
                plus++;
            }
            else if (c[i].b >= price)
            {
                minus++;
            }
        }

        if (minus <= k)
        {
            maxE = max(maxE, plus * price + minus * price);
        }
    }

    cout << maxE << endl;
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
