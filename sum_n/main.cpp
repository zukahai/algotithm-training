#include <bits/stdc++.h>
using namespace std;
const long long MOD = 1000000007;

long long getResult(long long n)
{
    if (n < 0)
        return 0;
    if (n % 2 == 1)
    {
        return ((n % MOD) * (((n + 1) / 2) % MOD)) % MOD;
    }
    else
    {
        return (((n + 1) % MOD) * ((n / 2) % MOD)) % MOD;
    }
}
int main()
{
    long long n;
    cin >> n;
    cout << getResult(n);
}