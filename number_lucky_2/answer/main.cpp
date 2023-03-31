#include <bits/stdc++.h>
using namespace std;

bool checkNumberLucky(long long number)
{
    if (number == 0)
    {
        return false;
    }
    for (int i = 1; i <= number / 4; i++)
    {
        if ((number - (4 * i)) % 7 == 0)
        {
            return true;
        }
    }
    for (int i = 1; i <= number / 7; i++)
    {
        if ((number - (7 * i)) % 4 == 0)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    long long number;
    cin >> number;
    bool check = checkNumberLucky(number);
    if (check)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}