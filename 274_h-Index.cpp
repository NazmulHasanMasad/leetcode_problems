#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <bits/stdc++.h>

using namespace std;
int hIndex(vector<int> &citations)
{
    sort(citations.begin(), citations.end());
    int n = citations.size();
    int maxi = 0;
    for (int i = 0; i < n; i++)
    {
        if (citations[i] >= n - i)
        {
            maxi = max(maxi, n - i);
        }
    }
    cout << maxi;
}

int main()
{
    vector<int> citations;

    citations.push_back(100);
    citations.push_back(0);
    citations.push_back(0);

    hIndex(citations);

    return 0;
}