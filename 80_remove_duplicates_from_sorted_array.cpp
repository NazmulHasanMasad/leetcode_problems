#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <bits/stdc++.h>

using namespace std;

int removeDuplicates(vector<int> &nums)
{
    int i = 0;
    int j = 2;
    while (j < nums.size())
    {
        if (nums[i] == nums[j])
        {
            nums.erase(nums.begin() + j);
        }
        else
        {
            i++;
            j++;
        }
    }
    cout << nums.size();
}

int main()
{
    vector<int> nums;

    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(3);

    removeDuplicates(nums);
    return 0;
}