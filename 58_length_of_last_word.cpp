#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int lengthOfLastWord(string s)
{
    int length = 0;
    cout << s.length() << endl;

    int tail = s.length() - 1;

    while (tail >= 0 && s[tail] == ' ')

        tail--;

    while (tail >= 0 && s[tail] != ' ')
    {
        length++;
        tail--;
    }

    cout << length;
}

int main()
{
    string s = "Hello world";
    lengthOfLastWord(s);

    return 0;
}