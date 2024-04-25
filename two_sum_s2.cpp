#include <iostream>
#include <vector>
#include <unordered_map>
#include <bits/stdc++.h>

using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    unordered_map<int, int> s;

    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        s[nums[i]] = i;
    }
    for (int j = 0; j < n; j++)
    {
        int complement = target - nums[j];
        if (s.count(complement) && s[complement] != j)
        {
            cout << j;
        }
    }
    return {};
}

int main()
{
    vector<int> nums;
    nums.push_back(2);
    nums.push_back(7);
    nums.push_back(11);
    nums.push_back(15);

    int target = 9;

    twoSum(nums, target);

    return 0;
}
