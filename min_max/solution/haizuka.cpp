#include <bits/stdc++.h>

using namespace std;

long long solve(long long n)
{
    if (n == 0)
        return 0;
    vector<int> a;
    while (n > 0)
    {
        a.push_back(n % 10);
        n /= 10;
    }
    sort(a.begin(), a.end());
    long long min = 0;
    long long max = 0;
    long long k = 1;
    for (int i = 0; i < a.size(); i++)
    {
        min = min * 10 + a[i];
        max = a[i] * k + max;
        k *= 10;
    }
    return max - min;
}

int main()
{
    long long n;
    cin >> n;
    cout << solve(n);
}