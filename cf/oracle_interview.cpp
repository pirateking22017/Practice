#include <iostream>
using namespace std;

const int MOD = 1e9 + 7;

long long power(long long b, long long exp, long long mod) {
    long long result = 1;
    b = b % mod;
    
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * b) % mod;
        }
        b = (b * b) % mod;
        exp = exp / 2;
    }
    
    return result;
}

int drawingEdge(int n) {
    long long m = (long long)n * (n - 1) / 2;
    
    return (int)power(2, m, MOD);
}

int main() {
    int n;
    cin >> n;
    
    cout << drawingEdge(n) << endl;
    
    return 0;
}