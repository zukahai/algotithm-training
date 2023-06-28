#include <bits/stdc++.h>

using namespace std;

long long solve(long long n)
{
    long long d = 1000000007;
    long long a = 1 + n / 3;
    long long b = 1 + n / 3 + (n % 3 == 2);
    long long c = 1 + n / 3 + (n % 3 > 0);
    return (((a % d) * (b % d) % d) * (c % d)) % d;
}

int main()
{
    long long n;
    cin >> n;
    cout << solve(n);
}