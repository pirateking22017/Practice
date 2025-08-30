
#include <bits/stdc++.h>
#include <string>
#include <vector>
using namespace std;

#define fl0(i, n) for (int i = 0; i < n; i++)
#define fl1(i, n) for (int i = 0; i <= n; i++)
using ll = long long;
using vi = vector<int>;
using usi = unordered_set<int>;

int solve(const string& s) {
    int count = 0;
    for (char c : s) {
        if (c == '1') {
            ++count;
        }
    }
    return count;
}

int main() {
    int t;
    cin >> t; 
    vi res(t);

    fl0(i,t) {
        string s;
        cin >> s; 
        res[i] = solve(s);
    }

    for (int re : res) {
        cout << re << endl; 
    }

    return 0;
}
