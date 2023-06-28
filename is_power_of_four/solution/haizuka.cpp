#include <bits/stdc++.h>

using namespace std;

string solve(long long n)
{
    if (n == 0)
        return "NO";
    while (n % 4 == 0)
    {
        n /= 4;
    }
    return (n == 1) ? "YES" : "NO";
}

int main()
{
    long long n;
    cin >> n;
    cout << solve(n);
}