#include <bits/stdc++.h>
#include <vector>
using namespace std;

#define fl(i, n) for (int i = 0; i < n; i++)
using ll = long long;
using vi = vector<int>;

void solve(int a, int b, int c, int n)
{
    if(n==0) return; //need this to end the loop //got segementaion fault w/o this
    solve(a, c, b, n - 1);
    cout << a << ' ' << c << endl;
    solve(b, a, c, n - 1);
}

int main()
{
    int n;
    cin >> n;

    // gotta o/p the number of moves    
    // steps is always gonna be 2^n-1
    cout << (1 << n) - 1 << endl; //bitwise repr of 2^n is 1<<n 
    solve(1, 2, 3, n);
}