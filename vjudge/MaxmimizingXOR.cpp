/*
main formula goes like
maxXor(L,R) = (1<<msb) - 1
*/
#include <bits/stdc++.h>
using namespace std;
int maximizingXor(int a, int b){
    int c  = a ^ b;
    int msb = 0;
    while(c>0){
        msb++;
        c>>=1;
    }

    return ((1<<msb) - 1);
}

int main(){
    int a,b;
    cin >> a >> b;
    cout << maximizingXor(a, b);
}