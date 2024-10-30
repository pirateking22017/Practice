#include <bits/stdc++.h>
using namespace std;

#define for_loop(i,n) for (int i=0; i<n;i++)
using ll = long long;


/*
the ans is rel simple, got i on first try -- sort arr
then we have two options -
median or mode
either choose the value which occurs the most no of times
or the value that is dead center of the array
*/ 
// ans was rejected and that too by just 1 value
// the median ans was rejected ? submitting mode
// rejected mf twice bcoz wrong init of ans1 and ans2 SIGH
int main(){
    int n;
    cin >> n;
    vector <int> l(n);
    for_loop(i,n){
        cin >> l[i];
    }

    sort(l.begin(), l.end());
    ll ans1=0;
    ll ans2=0;
    ll median = l[(n)/2];//error was here in my calc of the median  -- checked soln of gfg --> ll median = l[(n-1)/2]; ORIGINAL
    //median below
    for (auto it: l){
        ans1+=abs(median-it);
    }
    //mode below
    unordered_map<int, int> freq;
    for(auto it: l){
        freq[it]++  ;
    }
    int mode = l[0];
    int maxcount = 0;
    for (auto pair: freq){
        int value = pair.first;
        int count = pair.second;
        if(count > maxcount){
            maxcount = count;
            mode = value;
        }
    }
    for(auto it: l){
        ans2+=abs(mode - it);
    }
    cout << ans1 << endl;



}