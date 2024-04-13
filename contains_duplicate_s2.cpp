#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

bool containsDuplicate(vector<int> &v)
{

    int n = v.size();
    sort(v.begin(), v.end());
    for (int i = 1; i < n; i++)
    {
        if (v[i] == v[i - 1])
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