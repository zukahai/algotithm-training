#include <bits/stdc++.h>

using namespace std;

vector<int> solve(vector<int> a, int n)
{
    vector<int> b(n + 1, 0);
    vector<int> ans;
    for (int i = 0; i < a.size(); i++)
    {
        b[a[i]] = 1;
    }
    for (int i = 1; i <= n; i++)
    {
        if (b[i] == 0)
        {
            ans.push_back(i);
        }
    }
    return ans;
}
vector<int> a;
int main()
{
    int n, k;
    cin >> n >> k;
    a.resize(n - k);
    for (int i = 0; i < n - k; i++)
    {
        cin >> a[i];
    }
    vector<int> ans = solve(a, n);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}