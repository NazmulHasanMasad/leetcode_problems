#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

bool containsDuplicate(vector<int> &v)
{
    unordered_set<int> s;
    for (int num : v)
    {
        if (s.count(num) > 0)
        {
            return true;
        }
        s.insert(num);
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