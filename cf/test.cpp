#include <bits/stdc++.h>
#include <vector>
using namespace std;

#define fl0(i, n) for (int i = 0; i < n; i++)
#define fl1(i, n) for (int i = 0; i <= n; i++)
using ll = long long;
using vi = vector<int>;
using usi = unordered_set<int>;

void solve()
{
    int n; cin >> n;
    int f[100];
    fl0(i, n){
        int x;
        cin >> x;
        f[x]++;
    }
    int cost = 0;
    int pairs = min(f[0], f[1]);
    cost += pairs * 2;
    f[0] -= pairs;
    f[1] -= pairs;
    cost += f[0];
    
    fl0(i, 100){
        cost += i * f[i];
    }
    cout << cost << "\n";
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