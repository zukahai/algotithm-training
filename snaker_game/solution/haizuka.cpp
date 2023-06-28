#include <bits/stdc++.h>

using namespace std;

long long sum(vector<long long> a, int index1, int index2)
{
    if (index1 > index2)
        swap(index1, index2);
    if (index1 == 0)
    {
        return a[index2];
    }
    return a[index2] - a[index1 - 1];
}

long long solve(vector<vector<long long>> a)
{
    long long ans = 0;
    int m = a.size();
    int n = a[0].size();
    vector<vector<long long>> b = a;
    vector<long long> c(n, 0);
    c[0] = a[0][0];
    for (int i = 1; i < n; i++)
        c[i] = c[i - 1] + a[0][i];
    for (int j = 0; j < n; j++)
    {
        b[0][j] = c[j];
        for (int j2 = 0; j2 < n; j2++)
        {
            b[0][j] = max(b[0][j], sum(c, j, j2));
        }
    }
    for (int row = 1; row < m; row++)
    {
        c[0] = a[row][0];
        for (int i = 1; i < n; i++)
            c[i] = c[i - 1] + a[row][i];
        for (int j = 0; j < n; j++)
        {
            b[row][j] = a[row][j] + b[row - 1][j];
            for (int j2 = 0; j2 < n; j2++)
            {
                b[row][j] = max(b[row][j], sum(c, j, j2) + b[row - 1][j2]);
            }
        }
    }
    ans = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            ans = max(ans, b[i][j]);
    }
    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //         cout << b[i][j] << " ";
    //     cout << endl;
    // }

    return ans;
}

vector<vector<long long>> a;
int main()
{
    int m, n;
    cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        vector<long long> b;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            b.push_back(x);
        }
        a.push_back(b);
    }
    cout << solve(a);
}