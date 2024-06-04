#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#include <cmath>

using namespace std;
bool isAnagram(string s, string t)
{

    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    if (s == t)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    string s = "rat";
    string t = "car";
    isAnagram(s, t);
    return 0;
}