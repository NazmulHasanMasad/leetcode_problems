#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <bits/stdc++.h>

using namespace std;

int removeElement(vector<int> &nums, int val)
{
    for (int i = 0; i <= nums.size(); i++)
    {
        auto it = find(nums.begin(), nums.end(),
                       val);

        if (it != nums.end())
        {
            nums.erase(it);
        }
    }

    for (auto x : nums)
    {
        cout << x << " ";
        cout << endl;
    }

    int o = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        o += 1;
    }
    cout << " the output is : " << o;
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