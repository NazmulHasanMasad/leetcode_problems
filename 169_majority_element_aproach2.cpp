#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <bits/stdc++.h>

using namespace std;

int majorityElement(vector<int> &nums)
{
    unordered_map<int, int> s;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        s[nums[i]]++;
    }
    n = n / 2;

    for (auto x : s)
    {
        if (x.second > n)
        {
            cout << x.first;
        }
    }
    return 0;
}

int main()
{
    vector<int> nums;

    nums.push_back(3);

    nums.push_back(2);

    nums.push_back(3);

    majorityElement(nums);

    return 0;
}