#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        int total = a + b + c;
        if (total % 3 != 0) {
            cout << "NO" << endl;
        } else {
            int x = total / 3;
            if (x >= a && x >= b && x <= c) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
