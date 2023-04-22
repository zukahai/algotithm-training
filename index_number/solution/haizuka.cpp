#include <bits/stdc++.h>

using namespace std;

string solve(vector<int> a, int x)
{
    int l = 0;
    int r = a.size() - 1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (a[m] == x)
        {
            return "YES";
        }
        else if (a[m] < x)
        {
            l = m + 1;
        }
        else
        {
            r = m - 1;
        }
    }
    return "NO";
}

int main()
{
    int n, x;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> x;
    cout << solve(a, x) << endl;
    return 0;
}