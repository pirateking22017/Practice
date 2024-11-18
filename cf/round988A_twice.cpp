#include <bits/stdc++.h>
#include <vector>
using namespace std;

#define fl(i, n) for (int i = 0; i < n; i++)
using ll = long long;
using vi = vector<int>;

void solve()
{
    int n;
    cin >> n;
    vector<int>a(n);
    unordered_map<int, int> f;
    fl(i,n){
        cin >> a[i];
        f[a[i]]++;
    }
    int mx =0;
    for (auto &[val, cnt] : f){
        mx += cnt/2;
    }

    cout << mx << endl;
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