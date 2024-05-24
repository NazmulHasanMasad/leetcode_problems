#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int romanToInt(string m)
{
    unordered_map<char, int> s;
    s['I'] = 1;
    s['V'] = 5;
    s['X'] = 10;
    s['L'] = 50;
    s['C'] = 100;
    s['D'] = 500;
    s['M'] = 1000;

    int ans = 0;

    for (int i = 0; i < m.length(); i++)
    {
        if (s[m[i]] < s[m[i + 1]])
        {
            ans -= s[m[i]];
        }
        else
        {
            ans += s[m[i]];
        }
    }
    cout << ans;
}

int main()
{
    string s = "IX";
    romanToInt(s);

    return 0;
}