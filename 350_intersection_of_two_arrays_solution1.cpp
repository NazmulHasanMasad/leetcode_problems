#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
{
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());
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
        else if (nums1[i] < nums2[j])
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

    num1.push_back(4);
    num1.push_back(9);
    num1.push_back(5);

    vector<int> num2;

    num2.push_back(9);
    num2.push_back(4);
    num2.push_back(9);
    num2.push_back(8);
    num2.push_back(4);
    intersect(num1, num2);

    return 0;
}