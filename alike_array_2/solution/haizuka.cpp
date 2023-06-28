#include <bits/stdc++.h>

using namespace std;

int solve(vector<int> a)
{
    vector<int> b(a.size(), 0);
    vector<int> c(a.size(), 0);
    int ans = 0;
    b[0] = 1;
    c[c.size() - 1] = 1;
    for (int i = 1; i < a.size(); i++)
    {
        b[i] = (a[i] == a[i - 1]) ? b[i - 1] + 1 : 1;
    }
    for (int i = a.size() - 2; i >= 0; i--)
    {
        c[i] = (a[i] == a[i + 1]) ? c[i + 1] + 1 : 1;
    }
    ans = b[0];
    for (int i = 0; i < a.size(); i++)
        ans = max(ans, b[i]);
    if (ans < a.size())
        ans++;

    for (int i = 1; i < a.size() - 1; i++)
    {
        if (a[i - 1] == a[i + 1])
            ans = max(ans, b[i - 1] + c[i + 1] + 1);
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