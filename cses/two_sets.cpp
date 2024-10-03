#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// rejected first time bcoz of "No" format -> "NO"
// rejected second time because 0 is being added to each of the output sets
// changed output func lmao
// size of set2 which included 0 has to be reduced as well -- reduced taht as well
// changed the loop size instead of the additional bs
void solve(ll n)
{
    // check if n is odd
    ll sum = (1ll * n * (1ll * n + 1)) / 2;
    if (sum % 2 != 0)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;

        // to give the two sets now
        vector<int> set1, set2;
        vector<int> visited(n + 1, 0);

        ll set1_sum = 0;
        ll max_no = n;

        while (set1_sum < sum / 2)
        {
            ll rem_sum = sum / 2 - set1_sum;
            if (rem_sum > max_no)
            {
                set1.push_back(max_no);
                visited[max_no] = 1;
                set1_sum += max_no;
                max_no--;
            }
            else
            {
                set1.push_back(rem_sum);
                visited[rem_sum] = 1;
                set1_sum = sum / 2;
            }
        }

        // now add all rem elements to set2
        for (int i = 1; i <= n; i++)
        {
            if (visited[i] == 0)
            {
                set2.push_back(i);
            }
        }

        // print set1 and set2
        cout << set1.size() << endl;
        for (auto x: set1){cout << x << " ";}
        cout << endl; 
        cout << set2.size() << endl;        
        for (auto x: set2){cout << x << " ";}
    }
}

int main()
{
    ll n;
    cin >> n;
    solve(n);
    return 0;
}