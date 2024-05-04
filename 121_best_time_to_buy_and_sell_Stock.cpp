#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <bits/stdc++.h>

using namespace std;

int maxProfit(vector<int> &prices)
{
    int n = prices.size();
    int buy = prices[0];
    int profit = 0;
    for (int i = 1; i < n; i++)
    {
        if (prices[i] < buy)
        {
            buy = prices[i];
        }
        else if (prices[i] - buy > profit)
        {
            profit = prices[i] - buy;
        }
    }
    cout << profit;
}

int main()
{

    vector<int> prices;
    prices.push_back(7);
    prices.push_back(1);
    prices.push_back(5);
    prices.push_back(3);
    prices.push_back(6);
    prices.push_back(4);

    maxProfit(prices);
    return 0;
}