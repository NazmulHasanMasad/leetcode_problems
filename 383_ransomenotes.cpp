#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#include <cmath>

using namespace std;

bool canConstruct(string ransomNote, string magazine)
{
    unordered_map<char, int> d;

    for (int c : magazine)
    {
        if (d.find(c) == d.end())
        {
            d[c] = 1;
        }
        else
        {
            d[c]++;
        }
    }

    for (int e : ransomNote)
    {
        if (d.find(e) != d.end() && d[e] > 0)
        {
            d[e]--;
        }
        else
        {
            return false;
        }
    }

    return true;
}

int main()
{
    string ransomNote = "a";
    string magazine = "b";

    canConstruct(ransomNote, magazine);

    return 0;
}