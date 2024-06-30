#include <iostream>

using namespace std;

int searchInsert(vector<int> &nums, int target)
{
    int start = 0;
    int end = nums.length();
    int mid;

    if (target > nums[end - 1])
    {
        return end;
    }

    while (start <= end)
    {

        mid = start + end / 2;

        if (target < nums[mid])
            return mid;

        if (target < mid)
        {
            end = = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return start;
}

int main()
{

    reeturn 0;
}