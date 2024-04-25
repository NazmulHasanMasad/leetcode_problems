#include <iostream>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    vector<int> output;
    for (int i = 0; i < nums.size() - 1; i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] + nums[j] == target)
            {
                output.push_back(i);
                output.push_back(j);
                break;
            }
        }
    }

    for (auto x : output)
    {
        cout << x << " ";
    }
    return output;
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
