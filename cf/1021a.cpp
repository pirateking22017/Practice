// #include <iostream>
// #include <vector>
// #include <string>
// #include <algorithm>

// using namespace std;

// bool solve(const string& s) {
//     for (int i = 0; i < 10; ++i) {
//         if (s[i] - '0' < 9 - i) return false;
//     }
//     return true;
// }

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         string s;
//         cin >> s;
//         sort(s.begin(), s.end());
//         do {
//             if (solve(s)) {
//                 cout << s << '\n';
//                 break;
//             }
//         } while (next_permutation(s.begin(), s.end()));
//     }
//     return 0;
// }

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        vector<int> count(10, 0);
        for (char c : s) {
            count[c - '0']++;
        }
        string ans = "";
        for (int i = 0; i < 10; ++i) {
            for (int d = 9 - i; d <= 9; ++d) {
                if (count[d] > 0) {
                    ans += (char)(d + '0');
                    count[d]--;
                    break;
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
