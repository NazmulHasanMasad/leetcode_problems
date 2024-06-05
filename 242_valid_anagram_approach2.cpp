#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#include <cmath>

using namespace std;
bool isAnagram(string s, string t)
{
    unordered_map<char, int> m;
    if (s.size() != t.size())
    {
        return false;
    }

    for (int i = 0; i < s.length(); i++)
    {
        m[s[i]]++;
        m[t[i]]--;
    }
    for (auto x : m)
    {
        if (x.second != 0)
            return false;
    }
    return true;
}

int main()
{
    string s = "rat";
    string t = "car";
    isAnagram(s, t);
    return 0;
}