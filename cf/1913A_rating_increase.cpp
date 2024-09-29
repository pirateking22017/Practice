/*
Monocarp is a great solver of adhoc problems. Recently, he participated in an Educational Codeforces Round, and gained rating!

Monocarp knew that, before the round, his rating was a
. After the round, it increased to b
 (b>a
). He wrote both values one after another to not forget them.

However, he wrote them so close to each other, that he can't tell now where the first value ends and the second value starts.

Please, help him find some values a
 and b
 such that:

neither of them has a leading zero;
both of them are strictly greater than 0
;
b>a
;
they produce the given value ab
 when written one after another.
If there are multiple answers, you can print any of them.

Input
The first line contains a single integer t
 (1≤t≤104
) — the number of testcases.

The only line of each testcase consists of a single string ab
 of length from 2
 to 8
 that:

consists only of digits;
doesn't start with a zero.
Output
For each testcase, determine if such values a
 and b
 exist. If they don't, print -1. Otherwise, print two integers a
 and b
.

If there are multiple answers, you can print any of them.
*/

/*
given string ab
its a concatenation of 2 string a and b
with given conditions (above)

for each test case  ie permutation

iterate over the each of the possible split
check its vlaidity against given condiions
output the result

flow:
read the input //obv
iterate thru
check valid // no 0 at beginning // positive
compare value ie b > a defo be=coz his rating increased
to compare values we have to convert them into integers maybe??
{since acc string[(10)>(2)]=false
but int[(10)>(2)]=True}//based on ASCII values
print valid results
repeat
if none found - print a -1

*/
#include <bits/stdc++.h>

using namespace std;

void rating_increase(){
    string s;
    cin>>s;
    int n=s.size();

    for (int i=1; i<n; i++ ){
        string a=s.substr(0,i);
        string b=s.substr(i);
        int val_a=stoi(a);
        int val_b=stoi(b);
        if(val_a<val_b && a[0]!='0' && b[0]!='0'){cout<<val_a<<" "<<val_b<<endl; return;}
        
    }
    cout<<-1<<endl;
}

int main(){
    int test_cases =1;
    cin>>test_cases;
    while(test_cases--){rating_increase();}
}