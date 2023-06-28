#include <bits/stdc++.h>

using namespace std;

int solve(vector<int> a)
{
    vector<int> b(a.size(), 0);
    int ans = 0;
    b[0] = (a[0] > 0) ? 1 : 0;
    for (int i = 1; i < a.size(); i++)
    {
        if (a[i] > 0)
        {
            b[i] = b[i - 1] + 1;
        }
        else
        {
            b[i] = 0;
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