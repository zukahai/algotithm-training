#include <bits/stdc++.h>

using namespace std;

int count(long long n)
{
    int ans = 0;
    for (long long i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            ans += 1;
            if (i * i != n)
                ans += 1;
        }
    }

    return ans;
}

long long solve(long long a, long long b)
{
    if (b % a != 0)
        return 0;
    return count(b / a);
}

int main()
{
    long long a, b;
    cin >> a >> b;
    cout << solve(a, b);
}