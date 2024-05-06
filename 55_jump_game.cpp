#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <bits/stdc++.h>

using namespace std;

bool canJump(vector<int> &nums)
{
    int goal = nums.size() - 1;
    for (int i = nums.size() - 2; i >= 0; i--)
    {
        if (nums[i] + i >= goal)
        {
            goal = i;
        }
    }

    if (goal == 0)
    {
        cout << true;
    }
    else
    {
        cout << false;
    }
}

int main()
{
    vector<int> nums;

    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(4);

    canJump(nums);
    return 0;
}