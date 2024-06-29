#include <iostream>

using namespace std;

bool isPalindrome(int x)
{
    if (x < 0)
    {
        cout << "false";
    }

    long long reverse = 0;
    long long temp = x;

    while (temp != 0)
    {
        int digits = temp % 10;
        reverse = reverse * 10 + digits;
        temp = temp / 10;
    }

    if (reverse == x)
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
    int n;
    cin >> n;
    isPalindrome(n);
    return 0;
}