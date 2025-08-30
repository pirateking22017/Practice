/*
the approach goes like:
we have to get max(A&B)
first we set K = min(A,B)
then
C = K-1 | min(A,B) //perform OR operation
check C <= max(A,B)
if(true) then ans = C
else ans = C-1 (also = K-2)
*/

#include <bits/stdc++.h>
using namespace std;

int bitwiseAnd(int a, int b)
{
    if (((b - 1) | b) <= a)
        return b - 1;
    else
        return b - 2;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        cout << bitwiseAnd(a, b) << '\n';
    }
}