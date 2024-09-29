#include <bits/stdc++.h> //answer obtained from usaco guide for this question
using namespace std;
// approach we follow is -- put heavieest+lightest children in ? < weight_limit : if false then put the heaviest child in and
//  the lightest child has to wait

const int maxn = 2e5 + 10;

int n, x, p[maxn], i, j, ans;

bool gondola_bool[maxn];

void solve()
{
    cin >> n >> x;
    for (int i = 0; i < n; i++)
        cin >> p[i];
    sort(p, p + n);
    i = 0;
    j = n - 1;
    while (i < j)
    {
        if (p[j] + p[i] > x)
        {
            j--;
        }
        else
        {
            ++ans;
            gondola_bool[j] = gondola_bool[i] = true;
            i++;
            j--;
        }
        // check if heaviest+lightest child can take the same gondola
        // if they cant move to a lighter child -- arr is sorted -- increment in index results in a lighter weight
        // if they can -- then increment and decrement indices accordingly and mark their postition as yes
        // -- indicating theyve got a gondola
    }
    for (i = 0; i < n; i++)
        ans += gondola_bool[i] == false; // iterate thru the arr to see which kids havent got a gondola
    // then give them gondolas and increment ans
    cout << ans << "\n";
}

int main()
{
    solve();
    return 0;
}