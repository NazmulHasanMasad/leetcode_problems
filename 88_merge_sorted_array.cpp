#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{

    for (int i = 0, j = m; i < n; i++)
    {
        nums1[j] = nums2[i];
        j++;
    }

    sort(nums1.begin(), nums1.end());

    for (auto x : nums1)
    {
        cout << x << " ";
    }
}

int main()
{
    vector<int> nums1;
    nums1.push_back(1);
    nums1.push_back(2);
    nums1.push_back(3);
    nums1.push_back(0);
    nums1.push_back(0);
    nums1.push_back(0);
    int m = 3;
    vector<int> nums2;
    nums2.push_back(2);
    nums2.push_back(5);
    nums2.push_back(6);
    int n = 3;
    merge(nums1, m, nums2, n);
    return 0;
}