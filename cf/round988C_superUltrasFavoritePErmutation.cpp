#include <bits/stdc++.h>
#include <vector>
using namespace std;

#define fl0(i, n) for (int i = 0; i < n; i++)
#define fl1(i, n) for (int i = 0; i <= n; i++)
using ll = long long;
using vi = vector<int>;
using usi = unordered_set<int>;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        if (n < 5)
        {
            cout << "-1" << endl;
            continue;
        }
        for (int i = 0; i <= n; i++)
        {
            if (i == 5)
                continue;
            if (i & 1)
                cout << i << " ";
        }
        cout << 5 << " " << 4 << " ";
        for (int i = 2; i <= n; i++)
        {
            if (i == 4)
                continue;
            if (i % 2 == 0)
                cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}