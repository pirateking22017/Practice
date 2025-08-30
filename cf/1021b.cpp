#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        sort(a.begin(), a.end());  // Sort the bar positions
        
        if (k == 0) {
            // If no bars can be closed, there is only 1 valid house at the median
            cout << 1 << endl;
        } else {
            // Calculate the number of valid houses after removing k bars from both ends
            int ans = n - 2 * k;
            if (ans <= 0) {
                cout << 0 << endl;
            } else {
                cout << ans << endl;
            }
        }
    }
    
    return 0;
}
