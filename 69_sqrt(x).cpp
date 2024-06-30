#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int mySqrt(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }

    int start = 1;
    int end = n;
    int mid = -1;

    while (start <= end)
    {
        mid = start + (end - start) / 2;

        long long square = static_cast<long long>(mid) * mid;

        if (square > n)
        {
            end = mid - 1;
        }
        else if (square == n)
        {
            cout << mid;
        }
        else
        {
            start = mid + 1;
        }
    }

    return static_cast<int>(std::round(end));
}

int main()
{

    int n;
    cin >> n;

    mySqrt(n);

    return 0;
}