#include <bits/stdc++.h>

using namespace std;

long long solve(long long n, long long a, long long b)
{
    long long ans = (n / (a + b)) * a;
    ans += min(n % (a + b), a);
    return ans;
}

int main()
{
    long long a, b, n;
    cin >> n >> a >> b;
    cout << solve(n, a, b);
}