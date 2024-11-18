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
    vi a(n);
    unordered_set<int> values;
    fl(i, n) cin >> a[i], values.insert(a[i]);
    sort(a.begin(), a.end());
    int k = n - 2;
    
    for (int i = 1; i <= sqrt(k); i++)
    {
        if (k % i == 0)
        {
            int m = k / i;
            if (values.count(i) && values.count(m))
            {
                cout << i << " " << m << endl;
                break;
            } 
        }
    }

   
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