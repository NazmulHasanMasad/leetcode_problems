#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#include <cmath>

using namespace std;

string longestCommonPrefix(vector<string> &v)
{
    string ans = "";
    int n = v.size();
    if (n == 0)
    {
        return " ";
    }

    sort(v.begin(), v.end());

    string a = v[0];
    string b = v[n - 1];

    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b[i])
        {
            ans += a[i];
        }
        else
        {
            break;
        }
    }

    cout << ans;
}

int main()
{
    std::vector<std::string> s{"Math", "Mathema", "Mathmatics"};

    longestCommonPrefix(s);
    return 0;
}