#include <bits/stdc++.h>

using namespace std;

long long getPen(long long n, long long a, long long b)
{
    return n + (n / a) * b;
}

long long solve(long long n, long long a, long long b)
{
    long long ans = 1;
    long long l = 1, r = n;
    while (l < r)
    {
        long long m = (l + r) / 2;
        if (getPen(m, a, b) >= n)
        {
            r = m;
        }
        else
            l = m + 1;
    }
    return l;
}

int main()
{
    long long a, b, n;
    cin >> n >> a >> b;
    cout << solve(n, a, b);
}