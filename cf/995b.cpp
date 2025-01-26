#include <iostream>
#include <vector>
using ll = long long;
using namespace std;
void solve()
{

    ll n, a, b, c; cin >> n >> a >> b >> c;

    ll cycleD = a + b + c;
    ll fullC = n / cycleD;
    ll dist = fullC * cycleD;
    ll rem = n - dist;
    ll extra = 0;
    
    if (rem > 0)
    {
        extra++;
        if (rem > a)
        {
            extra++;
            if (rem > a + b)
            {
                extra++;
            }
        }
    }

    ll total_days = fullC * 3 + extra;
    cout << total_days << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
