#include <bits/stdc++.h>
using namespace std;
/*

void encounter(int n, int k, vector<int> gold)
{
    int stash = 0;
    int count;
    for (int i = 0; i < n; i++)
    {
        if (gold[i] > k)
            stash += gold[i];
        if (gold[i] = 0 && stash > 0)
            gold[i]++;
        count++;
    }
}

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> gold;
        for (int i = 0; i < n; i++)
        {
            cin >> gold[i];
        }
    }
}
*/

void encounter(){
    int n, k;
    cin >> n >> k;

    int stash = 0, count = 0;
    for(int i=0;i<n;i++){
        int current;
        cin >> current;
        if (!current && stash) {count++; stash--;}
        else if (current>=k) {stash+=current;}
    }
    cout << count << '\n';
}

int main(){
    int tc;
    cin >> tc;
    while(tc--) encounter();
    return 0;
}