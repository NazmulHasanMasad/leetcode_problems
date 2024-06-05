#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int nextNumber(int n)
{
    int newNumber = 0;

    while (n != 0)
    {
        int num = n % 10;

        newNumber += num * num;
        n = n / 10;
    }
    return newNumber;
}

bool isHappy(int n)
{
    unordered_set<int> m;

    while (n != 1)
    {
        m.insert(n);
        n = nextNumber(n);
    }

    return n == 1;
}

int main()
{
    int n = 19;

    isHappy(n);
    return 0;
}
