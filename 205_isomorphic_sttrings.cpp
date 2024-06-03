#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#include <cmath>

using namespace std;

bool isIsomorphic(string s, string t)
{
    unordered_map<char, char> m1, m2;

    if (s.length() != t.length())
    {

        return false;
    }
    for (int i = 0; i < s.length(); i++)
    {

        if (m1[s[i]] && m1[s[i]] != t[i])
        {
            return false;
        }
        if (m2[t[i]] && m2[t[i]] != s[i])
        {
            return false;
        }

        m1[s[i]] = t[i];
        m2[t[i]] = s[i];
    }

    return true;
}

int main()
{
    string s = "egg";
    string t = "add";

    isIsomorphic(s, t);

    return 0;
}