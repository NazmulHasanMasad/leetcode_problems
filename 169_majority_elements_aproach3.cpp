#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <bits/stdc++.h>

using namespace std;

int majorityElement(vector<int> &nums)
{
    int count = 0;
    int candidate = 0;
    for (auto num : nums)
    {
        if (count == 0)
        {
            candidate = num;
        }

        if (candidate == num)
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    cout << candidate;
}

int main()
{
    vector<int> nums;

    nums.push_back(2);

    nums.push_back(2);

    nums.push_back(1);
    nums.push_back(1);

    nums.push_back(1);

    nums.push_back(2);
    nums.push_back(2);

    majorityElement(nums);

    return 0;
}