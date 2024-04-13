#include <iostream>
#include <vector>
#include <bits/stdc++.h>

// using unordered map.
using namespace std;

int singleNumber(vector<int> &v)
{
    unordered_map<int, int> a;
    for (auto x : v)
    {
        a[x]++;
    }
    for (auto z : a)
    {
        if (z.second == 1)
        {
            return z.first;
        }
    }
    return -1;
}

int main()
{
    vector<int> v;
    v.push_back(4);
    v.push_back(1);
    v.push_back(2);
    v.push_back(1);
    v.push_back(2);

    cout << singleNumber(v);

    return 0;
}