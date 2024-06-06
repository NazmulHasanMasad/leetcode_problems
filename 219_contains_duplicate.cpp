#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#include <cmath>

using namespace std;

bool containsNearbyDuplicate(vector<int> &nums, int k)
{
    unordered_map<int, int> map;
    for (int i = 0; i < nums.size(); i++)
    {
        if (map.count(nums[i]))
        {

            if (abs(i - map[nums[i]]) <= k)

                return true;
        }

        map[nums[i]] = i;
    }

    return true;
}

int main()
{

    vector<int> nums = {1, 0, 1, 1};
    int k = 3;

    containsNearbyDuplicate(nums, k);

    return 0;
}
