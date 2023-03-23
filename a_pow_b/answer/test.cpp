#include <bits/stdc++.h>
#include <fstream>
using namespace std;
long modPow(long a, long b, long mod)
{
    int ans = 1;
    while (b > 0)
    {
        if (a % 2 == 1)
        {
            ans  = (ans * a) % mod;
        }
        b /= 2;
        a = ((a % mod) * (a % mod)) % mod;
    }
    return ans;
}

int main()
{
    long mod = 10000;
    long a, b;
    cin >> a >> b;
    cout << modPow(a, b, mod);
    return 0;
}