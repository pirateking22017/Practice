// this one is from gfg
#include <bits/stdc++.h>
/*
You have to process N tasks. Each task has a duration and a deadline given as 2D array tasks[][] such that for task i, 
tasks[i][0] is the duration, and tasks[i][1] is the deadline. 
You will process the tasks in some order one after another. 
Your reward for a task is d-f where d is its deadline and f is your finishing time. 
(The starting time is 0, and you have to process all tasks even if a task would yield a negative reward.)

What is your maximum reward if you act optimally?
*/
using namespace std;

#define ll long long int

ll solve(vector<vector<ll>> &tasks, ll n)
{   // accept the vector made of up of other vector, acc to the q (a,d) is the 2nd line of ip
    // so essentially {{a1,d1}, {a2,d2}...{an,dn}}
    sort(tasks.begin(), tasks.end());
    ll clock = 0;
    ll totalReward = 0;
    for (int i = 0; i < n; i++)
    {
        clock += tasks[i][0];                 // increment the clock acc to the d value of each pair the vector of vectos
        totalReward += (tasks[i][1] - clock); // since reward = (duration - deadline)
    }
    return totalReward;
}

void solve(int n)
{ // accept the vector made of up of other vector, acc to the q (a,d) is the 2nd line of ip
    // so essentially {{a1,d1}, {a2,d2}...{an,dn}}
    vector<vector<ll>> tasks(n, vector<ll>(2));
    for (int i = 0; i < n; i++)
    {
        cin >> tasks[i][0] >> tasks[i][1];
    }
    sort(tasks.begin(), tasks.end());
    ll clock = 0;
    ll totalReward = 0;
    for (int i = 0; i < n; i++)
    {
        clock += tasks[i][0];                 // increment the clock acc to the d value of each pair the vector of vectos
        totalReward += (tasks[i][1] - clock); // since reward = (duration - deadline)
    }
    cout << totalReward << endl;
}

int main()
{
    int n;
    cin >> n;
    solve(n);

}