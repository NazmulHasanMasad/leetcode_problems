#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <bits/stdc++.h>

using namespace std;

int jump(vector<int> &nums)
{
    for (int i = 1; i < nums.size(); i++)
    {
        nums[i] = max(nums[i] + i, nums[i - 1]);
    }

    int index = 0;
    int ans = 0;
    while (index < nums.size() - 1)
    {
        ans++;
        index = nums[index];
    }
    cout << ans;
}

int main()
{
    vector<int> nums;

    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(4);

    jump(nums);
    return 0;
}