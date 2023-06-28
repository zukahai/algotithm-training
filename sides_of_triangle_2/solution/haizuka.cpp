#include <bits/stdc++.h>

using namespace std;

long long solve(int n)
{
    long long count = 0;
    for (int a = 1; a <= n; a++)
        for (int b = a; b <= n; b++)
        {
            int maxC = a + b - 1;
            maxC = min(maxC, n);
            count += (maxC - b + 1);
        }
    return count;
}

int main()
{
    int n;
    cin >> n;
    cout << solve(n);
}