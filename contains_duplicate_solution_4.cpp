#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

bool containsDuplicate(vector<int> &v)
{
    unordered_map<int, int> a;
    for (auto x : v)
    {
        a[x]++;
    }
    for (auto s : a)
    {
        if (s.second > 1)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(1);

    cout << containsDuplicate(v);

    return 0;
}