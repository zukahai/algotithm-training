#include <bits/stdc++.h>

using namespace std;

long long solve(long long n)
{
    if (n < 0)
        return 0;
    long long d = 1000000007;
    long long a = n;
    long long b = n + 1;
    if (a % 2 == 0)
        a /= 2;
    else
        b /= 2;
    long long ans = ((a % d) * (b % d)) % d;
    return ans;
}

int main()
{
    long long n;
    cin >> n;
    cout << solve(n);
}