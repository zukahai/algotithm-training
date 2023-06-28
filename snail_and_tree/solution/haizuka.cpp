#include <bits/stdc++.h>

using namespace std;

long long solve(long long a, long long b, long long h)
{
    long long dis = a - b;
    if (h <= a)
        return 1;
    return 1 + ((h - a + dis - 1) / dis);
}

int main()
{
    long long a, b, h;
    cin >> a >> b >> h;
    cout << solve(a, b, h) << endl;
}