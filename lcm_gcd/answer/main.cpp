#include <bits/stdc++.h>
using namespace std;

long long count(long long a, long long b)
{

    if (a > b || b % a != 0)
    {
        return 0;
    }
    long long temp = b / a;
    long long count = 0;
    for (long long i = 1; i * i <= temp; i++)
    {
        if (temp % i == 0)
        {
            if (temp / i == i)
            {

                count++;
            }
            else
            {
                count += 2;
            }
        }
    }
    return count;
}

int main()
{
    long long a, b;
    cin >> a >> b;
    cout << count(a, b);
}