#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#include <cmath>

using namespace std;

bool isSubsequence(std::string s, std::string t)
{
    int i = 0, j = 0;

    while (i < s.size() && j < t.size())
    {

        if (s[i] == t[j])
        {

            i++;
        }
        j++;
    }

    if (i == s.size())
    {
        cout << "true";
    }
    else
    {

        cout << "false";
    }
}

int main()
{
    string s = "abc";
    string t = "ahbgdc";

    isSubsequence(s, t);

    return 0;
}