#include <bits/stdc++.h>

using namespace std;

int solve(vector<int> a)
{
    vector<int> b(a.size() + 2);
    for (int i = 0; i < a.size(); i++)
    {
        b[a[i]] = 1;
    }
    for (int i = 1; i < b.size(); i++)
    {
        if (b[i] == 0)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n - 1);
    for (int i = 0; i < n - 1; i++)
    {
        cin >> a[i];
    }
    cout << solve(a) << endl;
    return 0;
}