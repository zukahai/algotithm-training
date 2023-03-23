#include <bits/stdc++.h>
using namespace std;
long long counts[20000009];
long long a[20000009];

int  main()
{
    long long n;
    cin >> n;
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
    
    for (long long i = 0; i < length; i++)
    {
        counts[i] = 0;
    }
    for (long long i = 0; i < n; i++)
    {
        counts[a[i] - min] += 1;
    }
    long long maxNumber = a[0];
    for (long long i = 0; i < n; i++)
    {
        cout << a[i] << " " << counts[a[i] - min] << endl;
        if (counts[a[i] - min] > counts[maxNumber - min])
        {
            maxNumber = a[i];
        }
        if (counts[a[i] - min] == counts[maxNumber - min] && a[i] > maxNumber)
        {
            maxNumber = a[i];
        }
    }
    cout << maxNumber;
}