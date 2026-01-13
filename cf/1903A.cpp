/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <bits/stdc++.h>

using namespace std;
#define ll long long int

void solve(){
    int n,k;
    cin >> n >> k;
    vector<ll> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    vector<ll> b=a;
    sort(b.begin(), b.end());
    
    if(k==1 && a!=b) cout << "NO\n";
    else cout << "YES\n";
    
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while(tc--){
        solve();
    }
    return 0;
}
