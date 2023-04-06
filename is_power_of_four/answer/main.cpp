#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long number;
    cin >> number;
    if (number < 4 && number != 1)
    {
        cout << "NO";
        return 0;
    }
    if (number == 1)
    {
        cout << "YES";
        return 0;
    }

    bool check = true;
    while (number != 1)
    {
        if (number % 4 == 0)
        {
            number = number / 4;
        }
        else
        {
            check = false;
            break;
        }
    }
    if (check)
    {
        cout << "YES";
    }
    else
        cout << "NO";
}