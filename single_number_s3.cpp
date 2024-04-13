#include <iostream>
#include <vector>
#include <bits/stdc++.h>

// using bitwise xor operator
using namespace std;

int singleNumber(vector<int> &v)
{
    int ans = 0;
    for (auto x : v)
    {
        ans ^= x;
        return ans;
    }
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