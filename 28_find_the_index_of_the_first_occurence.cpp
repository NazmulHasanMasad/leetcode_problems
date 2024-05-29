#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#include <cmath>

using namespace std;

string longestCommonPrefix(string haystack, string needle)
{
  int m = haystack.size();
  int n = needle.size();

  if (m < n)

    cout << -1;

  for (int i = 0; i < m; i++)
  {
    if (haystack[i] == needle[0])
    {

      if (haystack.substr(i, n) == needle)
      {
        cout << i << endl;
      }
    }
  }
  cout << -1;
}

int main()
{

  string haystack = {"sadbutsad"};
  string needle = {"but"};
  longestCommonPrefix(haystack, needle);
  return 0;
}