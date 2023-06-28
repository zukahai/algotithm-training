#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
    int d = a % b;
    while (d != 0)
    {
        a = b;
        b = d;
        d = a % b;
    }
    return b;
}

int solve(vector<int> a)
{
    int ans = a[0];
    for (int i = 1; i < a.size(); i++)
    {
        ans = gcd(ans, a[i]);
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << solve(a) << endl;
    return 0;
}