#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
{
    int n = nums1.size();
    int m = nums2.size();

    vector<int> result;
    int i = 0;
    int j = 0;

    while (i < n && j < m)
    {
        if (nums1[i] == nums2[j])
        {
            result.push_back(nums1[i]);
            i++;
            j++;
        }
        else if (nums1[i < nums2[j]])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    for (auto x : result)
    {
        cout << x << " ";
    }
    return result;
}

int main()
{
    vector<int> num1;

    num1.push_back(1);
    num1.push_back(2);
    num1.push_back(2);
    num1.push_back(1);

    vector<int> num2;

    num2.push_back(2);
    num2.push_back(2);

    intersect(num1, num2);

    return 0;
}