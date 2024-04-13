#include <iostream>
#include <vector>

using namespace std;

bool containsDuplicate(vector<int> &v)
{

    int n = v.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (v[i] == v[j])
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(1);

    cout << containsDuplicate(v);

    return 0;
}