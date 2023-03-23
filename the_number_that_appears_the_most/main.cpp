#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long a[n];
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long max, min;
    min = max = a[0];

    for (long long i = 0; i < n; i++)
    {
        if (a[i] > max)
            max = a[i];
        if (a[i] < min)
            min = a[i];
    }
    long long length = abs(min) + abs(max) + 1;
    long long counts[length];
    for (int i = 0; i < length; i++)
    {
        counts[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        counts[a[i] + min] += 1;
    }
    int maxNumber = a[0];
    for (long long i = 0; i < n; i++)
    {
        if (counts[a[i] + min] > maxNumber)
        {
            maxNumber = a[i];
        }
        if (counts[a[i] + min] == counts[a[i] + min] && a[i] > maxNumber)
        {
            maxNumber = a[i];
        }
    }
}