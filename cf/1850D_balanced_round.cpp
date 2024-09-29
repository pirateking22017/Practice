/*
problem is actually just longest valid subarray
valid(t/f) is detemined by wether the diff bw given_diff[i+1]-given_diff[i]<k?len(valid_array)++
len(longest_yet_subarray)<len(valid_array)?(longest_yet_subarray == valid_array)else continue
REJECTED
fucked up test cases ka code :p lmao
REJECTED*4
not only did i fuk up int main, but i also didnt return anything
the D-1815 doesnt return shit after solving- should return number_of_problems-longest_yet_subarray as result
REJECTED
code fails on local pc
vector requires the no of prob value before it accepted - fixed 
fixed other--in code

local pc gives wrong ans for inputtestcase1 as given on cf website

REJECTED

added a new case for 0 prob, commented single input case as the main lop was giving me the correct an also
nvm 0 isnt needed

ACCEPTED :)
*/

#include <bits/stdc++.h>

#include <iostream>

using namespace std;

void D_1815()
{
    int number_of_problems, max_diff_bw_prob;

    cin >> number_of_problems >> max_diff_bw_prob;

    vector<int> given_diff(number_of_problems);



    for (int i = 0; i < number_of_problems; i++)
    {
        cin >> given_diff[i];
    }//changed i =1 here for a while, WRONG

    //commented this entire line bcoz my main loop was also giving an ans, didnt notice myb :p 
    //if(number_of_problems==1){cout<<"0"<<endl;}//moved order of this stmt//moved again coz it gave an output b4 the value of diff was given ie before k was input

    sort(given_diff.begin(), given_diff.end());

    int current_subarray=1, longest_yet_subarray=0;//changed init for both to 1-- chatgt
    for (int i = 1; i<number_of_problems; i++)//here i = 0 set tha even though logic inside the loop was i - i-1, wudve thrown an error
    //gonna try something, instead of i - i-1, imma try i+1 - i, will change for loop accordingly //ans changed, ans is always 1 short // imma now change the for loop here again to start from i instead of 0
    //nah still error, rolling back main loop back to i - i-1
    {
        int current_diff_bw_curr_elements = given_diff[i] - given_diff[i-1];
        if (current_diff_bw_curr_elements <= max_diff_bw_prob)
            current_subarray++;
        else
        {
            longest_yet_subarray = max(current_subarray, longest_yet_subarray);
            // now reset current subarray to contnue searching thru
            current_subarray = 1;
        }
    }
    longest_yet_subarray = max(current_subarray, longest_yet_subarray);
    // see coz there might be a case where the loop is broken before the current vs longest comparison has been done as in the
    // loop encounter s break when len(current)=10 & len(longest)=9 but the loop breaks coz it ecnounters the wrong char
    int result = number_of_problems-longest_yet_subarray;
    cout<<result<<endl;
}

int main()
{
    int test_cases = 1;
    cin>>test_cases;
    while (test_cases--)
    {
        D_1815();
    }
}