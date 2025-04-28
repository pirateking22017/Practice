/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool canContinueIndefinitely(vector<int>& clocks) {
    int n = clocks.size();
    
  
    if (n == 2) {
        
        return abs(clocks[0] - clocks[1]) >= 1;
    }
    
    // Sort the clocks to analyze their time settings
    sort(clocks.begin(), clocks.end());
    
    long long total_time = 0;
    
    // Sum the times of the first n-1 clocks
    for (int i = 0; i < n - 1; ++i) {
        total_time += clocks[i];
    }
    
    // If the total of n-1 clocks is greater than or equal to the maximum clock, return YES
    return (total_time >= clocks[n - 1]);
}

int main() {
    int t; // Number of test cases
    cin >> t;
    
    while (t--) {
        int n; // Number of clocks
        cin >> n;
        
        vector<int> clocks(n);
        for (int i = 0; i < n; ++i) {
            cin >> clocks[i];
        }
        
        if (canContinueIndefinitely(clocks)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
*/


#include <bits/stdc++.h>
#include <vector>
using namespace std;

#define fl0(i, n) for (int i = 0; i < n; i++)
#define fl1(i, n) for (int i = 0; i <= n; i++)
using ll = long long;
using vi = vector<int>;
using usi = unordered_set<int>;

void solve()
{
    int n;
    cin >> n;

    vi a(n);

    fl0(i, n) cin >> a[i];

    fl0(i, n)
    {
        if (a[i] <= i * 2 || a[i] <= (n - i - 1) * 2)
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl; 
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