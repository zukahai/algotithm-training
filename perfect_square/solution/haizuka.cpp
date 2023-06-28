#include <bits/stdc++.h>

using namespace std;

string solve(long long n)
{
    long long x = sqrt(n);
    if (x * x == n)
        return "YES";
    else
        return "NO";
}

int main()
{
    long long n;
    cin >> n;
    cout << solve(n);
}