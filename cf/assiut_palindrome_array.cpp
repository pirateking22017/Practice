#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> a(n+1);
bool pal(int ix)
{
    if (ix == n)
    {
        return 1;
    }
    return (a[ix] == a[n - ix - 1]) && pal(ix + 1);
}

int main()
{

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];    
    }

    if (pal(0))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    
}