#include <bits/stdc++.h>

using namespace std;

int solve(vector<int> a)
{
    vector<int> b(a.size(), 0);
    vector<int> c(a.size(), 0);
    int ans = 0;
    int max = 0;
    b[0] = b[b.size() - 1] = 1;
    for (int i = 1; i < a.size(); i++)
    {
        if (a[i] > a[i - 1])
        {
            b[i] = b[i - 1] + 1;
        }
        else
        {
            b[i] = 1;
        }
    }

    for (int i = c.size() - 2; i >= 0; i--)
    {
        if (a[i] > a[i + 1])
        {
            c[i] = c[i + 1] + 1;
        }
        else
        {
            c[i] = 1;
        }
    }

    for (int i = 1; i < a.size() - 1; i++)
        if (max < b[i] + c[i] - 1 && b[i] > 1 && c[i] > 1)
        {
            max = b[i] + c[i] - 1;
        }
    return (max == 0) ? -1 : max;
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