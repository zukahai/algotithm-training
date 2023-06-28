#include <bits/stdc++.h>

using namespace std;

int a[1009][1009];
int b[1009][1009];

long long solve(int m, int n)
{
    for (int i = 0; i <= m; i++)
        b[i][0] = 0;
    for (int i = 0; i <= n; i++)
        b[0][i] = 0;
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
            b[i][j] = max(b[i - 1][j], b[i][j - 1]) + a[i][j];
    return b[m][n];
}

int main()
{
    int m, n;
    cin >> m >> n;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
    }
    cout << solve(m, n) << endl;
    return 0;
}