#include <bits/stdc++.h>
using namespace std;
#define ll long long int
/*
There are n books, and Kotivalo and Justiina are going to read them all. For each book, you know the time it takes to read it.
They both read each book from beginning to end, and they cannot read a book at the same time.
What is the minimum total time required?
*/
// essentially if the max(reading time)>sum(all of other reading times) = True then ans=2*max(reading time)
// else ans=max(reading time)+(sum of all other reading ttime)

// n is the numbe of books

//REJECTED
// set sum =0 during its init; was set to random values -- gpt to debug

void solve(ll n)
{
    vector<ll> readingTime(n);
    ll sum=0;
    ll sum_wo_max, maxReadingTime;
    ll ans;

    for (ll i = 0; i < n; i++)
    {
        cin >> readingTime[i];
        sum+=readingTime[i];
    }
    sort(readingTime.begin(), readingTime.end());
    maxReadingTime = readingTime[n - 1];
    sum_wo_max=sum-maxReadingTime;
    maxReadingTime>sum_wo_max ? ans = 2*maxReadingTime : ans = sum;
    cout << ans;
}

int main()
{
    ll n;
    cin >> n;
    solve(n);
}