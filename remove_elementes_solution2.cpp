#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <bits/stdc++.h>

using namespace std;

int removeElement(vector<int> &nums, int val)
{
    int index = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != val)
        {
            nums[index] = nums[i];
            index++;
        }
    }
    return index;
}

int main()
{
    vector<int> nums;

    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(2);
    int val = 2;

    removeElement(nums, val);
    return 0;
}