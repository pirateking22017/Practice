#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector <int>;
#define pb push_back;
#define size(x) (int)(x).size()
#define for_loop(i,n) for(int i=0;i<n;i++)

int n;
vi x;
/*
this can also be done using multiset or a direct upper bound search
Let’s say x is [3, 5, 7] and we want to place z = 4 in x to maintain sorted order:
Using binary search, we find that the smallest position where 4 could be placed is at index 1 (since x[1] = 5).
This means 4 can replace 5 in x, resulting in x = [3, 4, 7].
SOURCE: https://usaco.guide/problems/cses-1073-towers/solution
*/
int main(){
    cin >> n;
    for_loop(i,n){
        int z;
        cin >> z;
        int low = 0;
        int high = size(x);
        while(low<high){
            int mid =(low+high)/2;
            if(x[mid]>z) high = mid;
            else low = mid+1;
        }
        if(low == size(x)) x.push_back(z);
        else x[low] = z;
    }
    cout << size(x);
}