//solution learnt and observed from https://codeforces.com/submissions/DocinhoS
// could not solve in contest, now understood

/*
an important point, the reason why we only check for closing k and k-1 bars is that we have to keep the median relatively simple and here coding for k to k-1 is enough ie the problem itself 
accounts for only these cases -- plus we have to make sure our median remains relatively stable- thereby closing only a few nos of bars is the way to go! 
*/


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        sort(a.begin(), a.end());
        
        int remBars = n - k;
        int idxL_k, idxR_k;
        
        if (remBars % 2 == 1) {
            idxL_k = (remBars + 1) / 2 - 1;
            idxR_k = idxL_k + k;
        } else {
            int u = remBars / 2;
            idxL_k = u - 1;
            idxR_k = u + k;
        }
        
        int L = a[idxL_k];
        int R = a[idxR_k];
        
        if (k >= 1) { 
            int m1 = n - (k - 1);
            int idxL_k1;
            
            if (m1 % 2 == 1) {
                idxL_k1 = (m1 + 1) / 2 - 1;
            } else {
                int u1 = m1 / 2;
                idxL_k1 = u1 - 1;
            }
            L = min(L, a[idxL_k1]);
        }
        
        cout << (R - L + 1) << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
    
    return 0;
}
