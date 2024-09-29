/*
**************NOT MY CODE*********************
*/

/*
cyclic array with a elements
m is the current size of array ie a(m-1) is the last term
tried two approaches, ek khud se, doora yt
both fuckall
looking at ans now
okay so he had the same idea, way more "efficent" code
esentially find the most occuring element, dont delete that but delete everything else
it does raise some interesting edge cases -- like what if the msot occuring one is deletable due to 
specific type of inputs, while 2nd most occuring wla is not
:p
submitting, i get it liek the code, but dint code it
*/


/*
void solve()
{
    int length_of_array;
    cin >> length_of_array;
    vector<int> elements_of_a(length_of_array);
    unordered_map<int, int> count;
    unordered_map<int, int> delete_map;

    for (int i = 0; i < length_of_array; i++)
    {
        cin >> elements_of_a[i];
    }

    for (int number_of_each : elements_of_a)
    {
        count[number_of_each]++;
    }
    // find the max_occurence of the element
    int max_occured_element = elements_of_a[0];
    int max_occured_frequency = count[max_occured_element];
    for (const auto &pair : count)
    {
        if (pair.second > max_occured_frequency)
        {
            max_occured_element = pair.first;
            max_occured_frequency = pair.second;
        }
    }
    // check which can be deleted
    for (int i = 0; i < elements_of_a.size(); i++)
    {   int cyclic = (i+1)%elements_of_a.size();
        if (elements_of_a[i] < elements_of_a[cyclic])
        {
           delete_map[elements_of_a[i]]++;
        }
        else
        {
            i++;
        }
    }
}

int main()
{
    int test_cases = 1;
    cin >> test_cases;
    while (test_cases--)
    {
        solve();
    }
}
*/

/*
int min_operations(vector<int> &a)
{
    int n = a.size();


    int operations = n - 1; // Initialize with the maximum number of operations
    for (int start = 0; start < n; start++)
    {
        int ops = 0;
        int last = a[start];

        for (int i = 1; i < n; i++)
        {
            int idx = (start + i) % n;
            if (a[idx] >= last)
            {
                last = a[idx];
            }
            else
            {
                ops++;
            }
        }
        operations = min(operations, ops);
    }

    return operations;
}

int main()
{
    int test_cases;
    cin >> test_cases;
    while (test_cases--)
    {
        int lgt;
        cin >> lgt;
        vector<int> given_inputs(lgt);
        for (int i = 0; i < lgt; ++i)
        {
            cin >> given_inputs[i];
        }
        cout << min_operations(given_inputs) << endl;
    }
    return 0;
}
*/
#include <bits/stdc++.h>
#include <vector>
// #include <unordered_map>
#include <algorithm>

using namespace std;
int main()
{
    int test_cases = 1;
    cin >> test_cases;
    while (test_cases--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &x:a)//here &x is used as a ref //then when we put i stuff, it modifies the array directly??
        {
            cin >> x;
        }
        vector<int>freq(n+1);//here when the array finds say 4 in the vector a, it then finds index 4 of vector freq and increments it
        for(int x: a) freq[x]++;

        cout << n-(*max_element(freq.begin(), freq.end())) << endl;
    }
}