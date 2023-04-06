#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long a, b, c;
    long long phanNguyen = n / 3;
    long long phanDu = n % 3;
    if (phanDu == 0)
    {
        a = b = c = (1 + phanNguyen);
    }
    if (phanDu == 1)
    {
        a = (2 + phanNguyen);
        b = c = (1 + phanNguyen);
    }
    if (phanDu == 2)
    {
        a = b = (2 + phanNguyen);
        c = (1 + phanNguyen);
    }
    long long mod = 1000000007;
    long long res = ((a % mod) * (b % mod)) % mod;
    res = ((res % mod) * (c % mod)) % mod;
    cout << res;
}