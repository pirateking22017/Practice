#include <bits/stdc++.h>
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
    int freq[100] = {0};
    fl0(i, n)
    {
        int x;
        cin >> x;
        freq[x]++;
    }

    int totalCost = 0;

    int pairs = min(freq[0], freq[1]);
    totalCost += pairs * 2;
    freq[0] -= pairs;
    freq[1] -= pairs;

    totalCost += freq[0];

    fl0(i, 100)
    {
        totalCost += i * freq[i];
    }

    cout << totalCost << '\n';
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