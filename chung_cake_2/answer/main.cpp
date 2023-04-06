#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long a, b, c;
    cin >> a >> b >> c;
    long long e, f, g;
    e = a + 1;
    f = b + 1;
    g = c + 1;
    long long result;
    long long mod = 1000000007;
    while (n != 0)
    {
        long A = e * f;
        long B = f * g;
        long C = g * c;
        if (A >= B && A >= C)
        {
        }
        else if (B >= A && B >= C)
        {
        }
        else if (C >= A && C >= B)
        {
        }
    }
}