/**
 * @file increasing_arr.cpp
 * @brief This file contains the solution to the Increasing Array problem from CSES.
 * 
 * The program reads an integer n and an array of n integers, and it calculates the minimum number of moves required to make the array strictly increasing.
 * 
 * @typedef ll
 * A typedef for long long, used for convenience to handle large integer values.
 * 
 * @var n
 * An integer representing the number of elements in the array.
 
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int N;
ll x, mx, sum;

int main(){
    scanf("%d", &N);
    scanf("%lld", &mx);
    for(int i = 1; i < N; i++){
        scanf("%lld", &x);
        mx = max(mx, x);
        sum += (mx - x);
    }
    printf("%lld\n", sum);
}

*/

#include <bits/stdc++.h>
#include<vector>

using namespace std;
using ll = long long;
int main(){
    int n;
    cin>>n;

    vector <ll> arr(n);
    for (int i =0; i<n; i++){cin>>arr[i];}
    ll sum = 0; ll mx = arr[0];

    for (int i=0;i<n;i++){
        arr[i]<mx ? sum+=(mx-arr[i]) : mx=arr[i]; 
    }

    cout << sum << endl;
    return 0;
    
}