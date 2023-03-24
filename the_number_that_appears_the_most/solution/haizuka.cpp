#include <bits/stdc++.h>

using namespace std;

int a[10000007];
int b[20000007];

int solve(int n)
{
    for (int i = 0; i < 20000007; i++)
    {
        b[i] = 0;
    }
    int min = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        a[i] -= min;
    }

    for (int i = 0; i < n; i++)
        b[a[i]]++;
    int indexMax = 0;
    for (int i = 0; i < 20000007; i++)
    {
        if (b[i] >= b[indexMax])
        {
            indexMax = i;
        }
    }
    return indexMax + min;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << solve(n);
}