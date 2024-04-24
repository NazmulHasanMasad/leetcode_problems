#include <iostream>
#include <algorithm>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

void moveZeroes(vector<int> &nums)
{
    int l = 0;
    for (int r = 0; r < nums.size(); r++)
    {
        if (nums[r] != 0)
        {
            swap(nums[r], nums[l]);
            l++;
        }
    }

    for (auto x : nums)
    {
        cout << x << " ";
    }
}

int main()
{
    vector<int> nums;

    nums.push_back(0);
    nums.push_back(1);
    nums.push_back(0);
    nums.push_back(3);
    nums.push_back(12);

    moveZeroes(nums);

    return 0;
}