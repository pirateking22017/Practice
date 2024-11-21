#include <bits/stdc++.h>
#include <vector>
using namespace std;

#define fl0(i, n) for (int i = 0; i < n; i++)
#define fl1(i, n) for (int i = 0; i <= n; i++)
#define newl cout << endl
using ll = long long;
using vi = vector<int>;
using usi = unordered_set<int>;

bool compare(const pair<int, int> &p1, const pair<int, int> &p2)
{
    int sum1 = p1.first + p1.second;
    int sum2 = p2.first + p2.second;

    return sum1 < sum2;

    //not added but further condition
    // If sums are equal, compare the largest elements
    //return max(p1.first, p1.second) < max(p2.first, p2.second);
}



void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> s;
    fl0(i, n)
    {
        int a1, a2;
        cin >> a1 >> a2;
        s.push_back({a1, a2});
    }

    sort(s.begin(), s.end(), compare);

    fl0(i, n)
    {
        cout << s[i].first << " " << s[i].second;
        if (i != n - 1)
            cout << " ";
    }
    newl;
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