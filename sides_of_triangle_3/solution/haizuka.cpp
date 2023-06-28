#include <bits/stdc++.h>

using namespace std;

long long sum(int n)
{
    return n * (n + 1) / 2;
}

long long solve(long long n)
{
    long long mod = 1000000007;
    long long k = (n + 1) / 2;
    long long h = n - k;
    long long t1, t2, t3;
    k %= mod;
    h %= mod;
    long long ans = 0;
    ans += ((((n % mod) * (k % mod) % mod) * ((k + 1) % mod) % mod) / 2) % mod;

    t1 = k;
    t2 = k + 1;
    t3 = 2 * k + 1;
    if (t1 % 3 == 0)
        t1 /= 3;
    else if (t2 % 3 == 0)
        t2 /= 3;
    else if (t3 % 3 == 0)
        t3 /= 3;

    ans -= ((((t1 % mod) * (t2 % mod) % mod) % mod) * (t3 % mod)) % mod;
    ans %= mod;

    ans += ((k % mod) * (k + 1) % mod) % mod;
    ans % mod;

    t1 = k + 1;
    t2 = k * k - k;
    if (t1 % 2 == 0)
        t1 /= 2;
    else if (t2 % 2 == 0)
        t2 /= 2;
    if (t1 % 3 == 0)
        t1 /= 3;
    else if (t2 % 3 == 0)
        t2 /= 3;

    ans += (t1 % mod) * (t2 % mod) % mod;
    ans %= mod;

    t1 = h + 1;
    t2 = h * h + 2 * h;
    if (t1 % 2 == 0)
        t1 /= 2;
    else if (t2 % 2 == 0)
        t2 /= 2;
    if (t1 % 3 == 0)
        t1 /= 3;
    else if (t2 % 3 == 0)
        t2 /= 3;

    ans += (t1 % mod) * (t2 % mod) % mod;
    ans %= mod;

    return ans % mod;
}

int main()
{
    long long n;
    cin >> n;
    cout << solve(n);
}