#include <bits/stdc++.h>

using namespace std;

bool isPrime(long long n)
{
    if (n < 2)
        return false;
    for (long long i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

string solve(long long n)
{
    if (n < 2)
        return "NO";
    while (n > 0)
    {
        if (!isPrime(n))
            return "NO";
        n /= 10;
    }
    return "YES";
}

int main()
{
    long long n;
    cin >> n;
    cout << solve(n);
}