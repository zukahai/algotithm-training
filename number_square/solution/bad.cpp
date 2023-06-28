#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long mod = 1000000007;
    long long n;
    cin >> n;
    long long ans = 0;
    for (long long i = 1; i <= n; i++)
    {
        ans += (i % mod) * (i % mod) % mod;
        ans %= mod;
    }
    cout << ans << endl;
}