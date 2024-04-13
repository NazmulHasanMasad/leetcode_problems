#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int singleNumber(vector<int> &v)
{

    int n = v.size();
    sort(v.begin(), v.end());
    for (int i = 1; i < n; i += 2)
    {
        if (v[i] != v[i - 1])
        {
            return v[i - 1];
        }
    }
    return v[n - 1];
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