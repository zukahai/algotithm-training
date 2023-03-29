#include <bits/stdc++.h>

using namespace std;

long long solve(long long n)
{
    if (n < 0)
        return 0;
    long long d = 1000000007;
    long long a = n;
    long long b = n + 1;
    return ((a % d) * (b % d) / 2) % d;
}

int main()
{
    long long n;
    cin >> n;
    cout << solve(n);
}