#include <bits/stdc++.h>

using namespace std;

long long solve(long long n)
{
    long long x = sqrt(n) + 1;
    return x * x - n;
}

int main()
{
    long long n;
    cin >> n;
    cout << solve(n);
}