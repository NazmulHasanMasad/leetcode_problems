#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <bits/stdc++.h>

using namespace std;

int majorityElement(vector<int> &nums)
{
    int n = nums.size();
    sort(nums.begin(), nums.end());

    cout << nums[n / 2];
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