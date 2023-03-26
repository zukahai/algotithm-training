#include <bits/stdc++.h>
using namespace std;
const long long LENGHT = 10e3;
long long a[LENGHT][LENGHT];
long long reuslt[LENGHT][LENGHT];
int main()
{
    long long m, n;
    cin >> m >> n;
    for (long long i = 0; i < m; i++)
    {
        for (long long j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    reuslt[0][0] = a[0][0];
    for (long long i = 1; i < n; i++)
    {
        reuslt[0][i] = reuslt[0][i - 1] + a[0][i];
    }
    for (long long i = 1; i < m; i++)
    {
        reuslt[i][0] = reuslt[i - 1][0] + a[i][0];
    }
    for (long long i = 1; i < m; i++)
    {
        for (long long j = 1; j < n; j++)
        {
            if (reuslt[i][j - 1] >= reuslt[i - 1][j])
            {
                reuslt[i][j] = a[i][j] + reuslt[i][j - 1];
            }
            else
            {
                reuslt[i][j] = a[i][j] + reuslt[i - 1][j];
            }
        }
    }
    cout << reuslt[m - 1][n - 1];
}