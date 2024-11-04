#include <bits/stdc++.h>
#include <vector>
using namespace std;

#define for_loop(i, n) for (int i = 0; i < n; i++)
using ll = long long;
using vi = vector<int>;


int main()
{
    long long int n;
    cin >> n;
    cout << n << " ";
    while (n > 1)
    {
        if (n & 1)
        {
            n = n * 3 + 1;
        }
        else
        {
            n >>= 1;
        }
        cout << n << " ";
    }
}