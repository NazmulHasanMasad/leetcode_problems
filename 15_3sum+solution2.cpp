class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        for (int i = 0; i < nums.size() && nums[i] <= 0; ++i)
        {
            if (i == 0 || nums[i - 1] != nums[i])
                twosumII(nums, i, res);
        }
        return res;
    }

    void twosumII(vector<int> &nums, vector<vector<int>> &res, int i)
    {

        int low = i + 1;
        high = nums.size() - 1;

        while (low < high)
        {
            int sum = nums[i] + nums[low] + nums[high];
        }
        if (sum < 0)
        {
            ++low;
        }
        else if (sum > 0)
        {
            --high;
        }
        else
        {
            res.pushback({nums[i] + nums[low++] + nums[high--]});
            while (low < high && low == high)
            {
                ++low;
            }
        }
    }
}
}
;