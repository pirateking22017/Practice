#include <bits/stdc++.h>
#include <vector>
using namespace std;

#define fl(i, n) for (int i = 0; i < n; i++)
using ll = long long;
using vi = vector<int>;

void solve()
{
    int a, b, c, m;
    cin >> a >> b >> c;
    cin >> m;
    vector<pair<int, string>> A;
    fl(i, m)
    {
        int cost;
        string portType;
        cin >> cost >> portType;
        A.push_back(make_pair(cost, portType));
    }

    sort(A.begin(), A.end());
    //cout << "Sorted loop: " << endl;
    //fl(i, m) { cout << "(" << A[i].first << ", " << A[i].second << ")" << endl; }

    ll totalEquipped = 0;
    ll totalCost = 0;

    for (auto &x : A)
    {
        if (x.second == "USB") // USB ports
        {
            if (a > 0)
            {
                a--;
                totalEquipped++;
                totalCost += x.first;
                //cout << "Cost for USB : " << totalCost << endl;
            }
            else if (c > 0)
            {
                c--;
                totalEquipped++;
                totalCost += x.first;
                //cout << "Cost for USB+dual : " << totalCost << endl;
            }
        }
        else
        { // PS2 ports
            if (b > 0)
            {
                b--;
                totalEquipped++;
                totalCost += x.first;
                //cout << "Cost for PS2 : " << totalCost << endl;
            }
            else if (c > 0)
            {
                c--;
                totalEquipped++;
                totalCost += x.first;
                //cout << "Cost for PS2+dual : " << totalCost << endl;
            }
        }
    }
    cout << totalEquipped << " " << totalCost;
}

int main()
{
    int tc = 1;

    while (tc--)
    {
        solve();
    }
}