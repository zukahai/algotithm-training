// The number that appears the most
#include <bits/stdc++.h>
using namespace std;
const long long LENGTH = 1e12;
bool checkPrime(long long a)
{
    if (a < 2)
    {
        return false;
    }
    for (long long i = 2; i * i < a; i++)
    {
        if (a % i == 0)
        {
            return false;
        }
    }
    return true;
}
bool checkSuperPrime(long long a)
{
    if (a < 2)
    {
        return false;
    }
    while (a > 1)
    {
        if (checkPrime(a) == false)
        {
            return false;
            break;
        }
        a = a / 10;
    }
    return true;
}
int main()
{
    int number;
    cin >> number;
    bool check = false;
    check = checkSuperPrime(number);
    if (check == true)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}