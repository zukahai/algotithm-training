#include <bits/stdc++.h>
using namespace std;
const long long LENGHT = 10e5;
long long a[LENGHT];
long long arrayAscEnd[LENGHT];
long long arrayDecStart[LENGHT];
long long saveMountain[LENGHT];
int main()
{
    long long n;
    cin >> n;
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    arrayAscEnd[0] = 1;
    arrayDecStart[n - 1] = 1;
    for (int i = 1; i < n; i++)
    {
        if (a[i] > a[i - 1])
        {
            arrayAscEnd[i] = arrayAscEnd[i - 1] + 1;
        }
        else
            arrayAscEnd[i] = 1;
    }
    for (int i = n - 2; i >= 0; i--)
    {
        if (a[i] > a[i + 1])
        {
            arrayDecStart[i] = arrayDecStart[i + 1] + 1;
        }
        else
            arrayDecStart[i] = 1;
    }
    saveMountain[0] = 0;
    long long max = saveMountain[0];
    for (long long i = 1; i < n - 1; i++)
    {
        if (a[i] > a[i + 1] && arrayAscEnd[i] > arrayAscEnd[i - 1])
        {
            saveMountain[i] = arrayAscEnd[i] + arrayDecStart[i + 1];
        }
        else
        {
            saveMountain[i] = 0;
        }
        if (saveMountain[i] > max)
        {
            max = saveMountain[i];
        }
    }
    if (max == 0)
    {
        cout << -1;
        return 0;
    }
    cout << max;
}