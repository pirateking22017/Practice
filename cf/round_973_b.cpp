#include <bits/stdc++.h>
using namespace std;

void solve()
{
    /*

    int result;
    result = ()
    */
    int n, k;
    cin >> n >> k;
    /*
    int l = 0;

    for (int i = 1; i <= n; i++)
    {
        if (i + k - 1 >= n)
        {
            l += i * i; // Add i^2 leaves
        }
    }

    l % 2 == 0 ? cout<<"YES"<<"\n" : cout<<"NO"<<"\n";
    */

   int result;

   result = ((n*(n+1)/2)-((n-k)*(n-k+1)/2));
   result%2 ? cout << "NO\n" : cout << "YES\n";
}

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
}