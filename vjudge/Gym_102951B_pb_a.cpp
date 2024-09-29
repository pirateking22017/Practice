/*#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> algo;

    int c;
    cin >> c;

    for (int i = 0; i < n; i++)
    {
        cin >> algo[i];
    }

    sort(algo.begin(), algo.end());
    int sum = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        sum += algo[i];
        if (sum <= c)
        {
            count = count + 1;
        }
    }

    cout << count << endl;
}
*/

#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    int n, x, count = 0;
    vector<int> v;
    cin >> n >> x;

    for (int i = 0; i < n; i++)
    {
        int y;
        cin >> y;
        v.push_back(y);
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++)
    {
        x -= v[i];
        if (x < 0)
        {
            break;
        }
        else
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}