#include <bits/stdc++.h>

using namespace std;

long long solve(long long n)
{
    long long ans = 0;
    long long index = 5;
    while (true)
    {
        ans += n / index;
        if (index > n / 5.0)
            break;
        index *= 5;
    }
    return ans;
}

int main()
{
    long long n;
    cin >> n;
    cout << solve(n);
}