#include <bits/stdc++.h>

using namespace std;

bool b[109][109][109];

int solve(vector<vector<int>> a)
{
    int m = a.size();
    int n = a[0].size();
    for (int col = 0; col < n; col++)
        for (int row = 0; row < m; row++)
            b[col][row][row] = a[row][col];
    for (int col = 0; col < n; col++)
        for (int i = 0; i < m - 1; i++)
            for (int j = i + 1; j < m; j++)
                if (a[j][col] > 0 && b[col][i][j - 1])
                    b[col][i][j] = true;
    int ans = 0;
    for (int i = 0; i < m; i++)
        for (int j = i; j < m; j++)
        {
            int count = 0;
            for (int k = 0; k < n; k++)
                count += b[k][i][j];
            ans = max(ans, count * (j - i + 1));
        }

    // for (int col = 0; col < n; col++)
    // {
    //     cout << "Col: " << col << endl;
    //     for (int i = 0; i < m; i++)
    //     {
    //         for (int j = i; j < m; j++)
    //         {
    //             cout << "b[" << col << "][" << i << "][" << j << "]: " << b[col][i][j] << endl;
    //         }
    //     }
    // }
    return ans;
}

int main()
{
    vector<vector<int>> a;
    int m, n;
    cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        vector<int> t(n);
        for (int j = 0; j < n; j++)
            cin >> t[j];
        a.push_back(t);
    }
    cout << solve(a);
}