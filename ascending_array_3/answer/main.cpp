#include <bits/stdc++.h>
using namespace std;
const long long LENGTH = 1000003;
long long a[LENGTH];
long long arrayEnd[LENGTH];
long long arrayStart[LENGTH];
long long result[LENGTH];
bool checkFirstMissing(long long a, long long b)
{
    if (a == b)
    {
        return false;
    }
    else if (b - a == 1)
    {
        return false;
    }
    else if (a == 1000000000)
    {
        return false;
    }
    else if (b == -1000000000)
    {
        return false;
    }
    return true;
}
int main()
{
    long long n;
    cin >> n;
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    arrayEnd[0] = 1;
    for (int i = 1; i < n; i++)
    {
        if (a[i] > a[i - 1])
        {
            arrayEnd[i] = arrayEnd[i - 1] + 1;
        }
        else
        {
            arrayEnd[i] = 1;
        }
    }
    arrayStart[n - 1] = 1;
    for (int i = n - 2; i >= 0; i--)
    {
        if (a[i] < a[i + 1])
        {
            arrayStart[i] = arrayStart[i + 1] + 1;
        }
        else
        {
            arrayStart[i] = 1;
        }
    }
    result[0] = abs(a[1]) == 1000000000 ? 1 : arrayStart[1] + 1;
    result[n - 1] = a[n - 1] == 1000000000 ? 1 : arrayEnd[n - 2] + 1;
    long long max = result[0];
    for (int i = 1; i < n - 1; i++)
    {
        if ((a[i - 1] < a[i + 1]) && checkFirstMissing(a[i - 1], a[i + 1]))
        {
            result[i] = arrayStart[i + 1] + arrayEnd[i - 1] + 1;
        }
        else
        {
            if (arrayStart[i + 1] > arrayEnd[i - 1] && a[i + 1] != -1000000000)
            {
                result[i] = arrayStart[i + 1] + 1;
            }
            else if (arrayEnd[i - 1] > arrayStart[i + 1] && a[i - 1] != 1000000000)
            {
                result[i] = arrayEnd[i - 1] + 1;
            }
        }
        if (result[i] > max)
        {
            max = result[i];
        }
    }
    cout << max;
}