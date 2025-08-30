#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int tests;
    cin >> tests;
    while (tests--) {
        int n;
        string s;
        cin >> n >> s;
        
        if (n == 2) {
            if (s == "AB") {
                cout << "Alice\n";
            } else {
                cout << "Bob\n";
            }
            continue;
        }
        
        int cnt = 0;
        for (char c : s) {
            if (c == 'A') cnt++;
        }
        
        if (cnt == 1) {
            cout << "Bob\n";
        } else if (cnt >= n - 1) {
            cout << "Alice\n";
        } else {
            if (s[n-1] == 'A' && (s[0] == 'A' || s[n-2] == 'A')) {
                cout << "Alice\n";
            } else {
                cout << "Bob\n";
            }
        }
    }
    
    return 0;
}
