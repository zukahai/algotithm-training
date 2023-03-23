#include <bits/stdc++.h>

using namespace std;

int solve(long long a, long long b, int mod)
{
    long long ans = 1;
    while (b > 0)
    {
        if (b % 2 == 1)
        {
            ans = (ans * a) % mod;
            b--;
        }
        a = ((a % mod) * (a % mod)) % mod;
        b /= 2;
    }
    return ans;
}

int main()
{
    long long a, b;
    cin >> a >> b;
    cout << solve(a, b, 10000) << endl;
}
