#include <bits/stdc++.h>

using namespace std;

long long solve(long long n)
{
    long long mod = 1000000007;
    long long a = n;
    long long b = n + 1;
    long long c = 2 * n + 1;
    if (a % 2 == 0)
    {
        a /= 2;
    }
    else if (b % 2 == 0)
    {
        b /= 2;
    }
    else
        c /= 2;
    if (a % 3 == 0)
    {
        a /= 3;
    }
    else if (b % 3 == 0)
    {
        b /= 3;
    }
    else
        c /= 3;

    return ((((a % mod) * (b % mod)) % mod) * (c % mod)) % mod;
}

int main()
{
    long long n;
    cin >> n;
    cout << solve(n);
}