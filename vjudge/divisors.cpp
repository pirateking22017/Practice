#include <bits/stdc++.h>

using namespace std;

using LL = long long;

vector<LL> get_div(LL n)
{
    vector<LL> divs;

    for (int i = 0; i * i * 1LL <= n; i++)
    {
        if (n % i == 0)
        {
            divs.push_back(i);
            if (i != n / i)
            {
                divs.push_back(n / i);
            }
        }
    }

    sort(divs.begin(), divs.end());

    for (int d : divs)
    {
        cout << d << endl;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    get_div(n);
}