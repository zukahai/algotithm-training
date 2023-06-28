#include <bits/stdc++.h>

using namespace std;

int solve(vector<long long> a, int d)
{
    if (a.size() == 1)
        return 1;
    vector<int> b(a.size(), 1);
    for (int i = 1; i < a.size(); i++)
    {
        for (int j = 0; j < i; j++)
            if (a[i] - a[j] == d && b[j] + 1 > b[i])
                b[i] = b[j] + 1;
    }
    int ans = b[0];
    for (int i = 0; i < a.size(); i++)
    {
        ans = max(ans, b[i]);
    }
    return ans;
}
vector<long long> a;
int main()
{
    int n, d;
    cin >> n >> d;
    a.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << solve(a, d);
}