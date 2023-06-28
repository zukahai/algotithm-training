#include <bits/stdc++.h>

using namespace std;

vector<long long> b;
long long solve(vector<int> a)
{
    b.resize(a.size(), 0);
    long long ans = 0;
    b[0] = a[0];
    for (int i = 1; i < a.size(); i++)
    {
        if (b[i - 1] > 0)
        {
            b[i] = b[i - 1] + a[i];
        }
        else
        {
            b[i] = a[i];
        }
    }
    ans = b[0];
    for (int i = 1; i < b.size(); i++)
    {
        ans = max(ans, b[i]);
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