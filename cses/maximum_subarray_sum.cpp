#include <bits/stdc++.h>
#include <vector>
using namespace std;

#define for_loop(i, n) for (int i = 0; i < n; i++)
using ll = long long;
using vi = vector<int>;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int mx = a[0];
    int curr = a[0];

    for (int i = 1; i < n; i++)
    {
        curr = max(curr + a[i], a[i]);
        mx = max(mx, curr);
    }

    cout << mx << endl;
}