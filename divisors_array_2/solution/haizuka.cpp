#include <bits/stdc++.h>

using namespace std;

int b[10000009];

int solve(vector<int> a, int k)
{
    int n = a.size();
    int max = a[0];
    for (int i = 1; i < n; i++)
        if (a[i] > max)
            max = a[i];
    for (int i = 0; i < n; i++)
        b[a[i]]++;
    int ans = 1;
    for (int i = max; i >= 2; i--)
    {
        int count = 0;
        for (int j = 1; j <= max / i; j++)
            count += b[i * j];
        if (count >= n - k)
        {
            ans = i;
            break;
        }
    }
    return ans;
}

vector<int> a;

int main()
{
    int n, k;
    cin >> n >> k;
    a.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << solve(a, k) << endl;
    return 0;
}