/*

You are given a binary string s
 (a string consisting only of 0-s and 1-s).

You can perform two types of operations on s
:

delete one character from s
. This operation costs 1
 coin;
swap any pair of characters in s
. This operation is free (costs 0
 coins).
You can perform these operations any number of times and in any order.

Let's name a string you've got after performing operations above as t
. The string t
 is good if for each i
 from 1
 to |t|
 ti≠si
 (|t|
 is the length of the string t
). The empty string is always good. Note that you are comparing the resulting string t
 with the initial string s
.

What is the minimum total cost to make the string t
 good?

Input
The first line contains a single integer t
 (1≤t≤104
) — the number of test cases. Then t
 test cases follow.

The only line of each test case contains a binary string s
 (1≤|s|≤2⋅105
; si∈{
0, 1}
) — the initial string, consisting of characters 0 and/or 1.

Additional constraint on the input: the total length of all strings s
 doesn't exceed 2⋅105
.

Output
For each test case, print one integer — the minimum total cost to make string t
 good.

*/

/*

three cases:

1.single char - only delete to make t look good; cost[1]=0
2.even no of char - means we can swap every element with another; cost[2]=0
3.odd no of char - means we gotta delt atleast one to make it look good; cost[3]=1
4.we have to judge the number of 1 and 0 seperately
if count[ones]=count[zeroes] then case 2
if count[ones]>count[zeroes] then case 3, where we have to delete a 1
if count[zerioes]>count[ones] then case 3, where we have to delete a 0
5.after swapping we have to make sure that the s[i] and t[i] dont remain the same
ex: 1100
swapping index[0]=index[1] gives us a bad string
so we dont have to swap so much as replace, consider the conditions same as before but make damn sure
that the counts of the ones and zeroes are matched

approach-
greedy: dont iterate over the string first, just keep flipping, then iterate to see if it
really is "good" ?? wrong
what if there isnt enough ones or zeroes after the swap to jsutify the swap ??

greedy with count:
read the string once, keep a count of 0s and 1s in two different arrays or vectors with two arrays
then read the string again to swap, when reading a 1-> swap to 0, and decrement the count of 1
reading a 0 -> swapto 1 and count[0]--
when either count[0] or count[1] == 0
then we dont need to any further since we can tswap, in orderto make it look good -> we'd have to
delt the rest anyways
so we need to cout the number of remaining char as cost(del)=1

REJECTED

used vector to store; bitwise to calc

REJECTED

my dearest array is not counting the numbers fo 1 and 0

ACEPTED
sidequest: why didnt it accpe thte first ver, sec ver had the error in count but wts wrong with the first one
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

/*void swap_delete()
{
    string s;
    cin >> s;
    int n = s.size();
    int count_0 = 0;
    int count_1 = 0;
    for (char c : s)
    {
        if (c == 0)
        {
            count_0++;
        }
        else
        {
            count_1++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        char current = s[i];
        if (current == '0')
        {
            if (count_1 == 0)
            {
                cout << n - i << endl;
                return;
            }
            count_1--;
        }else {//current = 1
            if(count_0==0){
                cout<<n-i<<endl;
                return;
            }
            count_0--;
        }
    }
    cout<<0<<endl;
}
*/

void swap_delete()
{
    string s;
    cin >> s;
    int n = s.size();
    // using a vector this time
    vector<int> count(2, 0);
    for (int i = 0; i < n; i++)
    {
        //count[s[i] - '0'] ^ 1;//missing ++ godammint//messed up bitside :p
        //shud nt hab ^1- since it means fuckall
        count[s[i]-'0']++;
        // test
        /*
        cout << "elements: " << endl;
        for (int val : count)
        {
            cout << val << "";
        }
        cout << endl;
        for (size_t i = 0; i < count.size(); i++)
        {
            cout << count[i] << " ";
        }
        cout<<endl;
        */
    }
    // count above
    // calc cost below
    for (int i = 0; i < n; i++)
    {
        int x = (s[i] - '0') ^ 1;
        if (count[x] == 0)
        {
            cout << n - i << endl;
            return;
        }
        count[x]--;
    }
    cout << 0 << endl;
}

int main()
{
    int test_cases = 1;
    cin >> test_cases;
    while (test_cases--)
    {
        swap_delete();
    }
    return 0;
}