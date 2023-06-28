#include <bits/stdc++.h>

using namespace std;

int solve(vector<int> a)
{
    if (a.size() == 1)
        return 1;
    vector<int> b(a.size(), 0);
    b[0] = 1;
    b[1] = 2;
    for (int i = 2; i < a.size(); i++)
    {
        if (a[i] - a[i - 1] == a[i - 1] - a[i - 2])
        {
            b[i] = b[i - 1] + 1;
        }
        else
        {
            b[i] = 2;
        }
    }
    int ans = b[0];
    for (int i = 0; i < a.size(); i++)
    {
        ans = max(ans, b[i]);
    }
    return ans;
}
vector<int> a;
int main()
{
    int n;
    cin >> n;
    a.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << solve(a);
}