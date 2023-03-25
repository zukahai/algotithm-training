#include <bits/stdc++.h>
using namespace std;
long long array1[100000000];
long long array2[100000000];

int main()
{

    long long n;
    cin >> n;
    if (n == 1 || n == 0)
    {
        cout << n;
        return 0;
    }

    array2[0] = n;
    long long dem1 = 0;
    long long dem2 = 1;
    for (long long i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            array1[dem1] = i;
            if (n / i != n && n / i != i)
            {
                array2[dem2] = n / i;
                dem2++;
            }
            dem1++;
        }
    }
    for (long long i = 0; i < dem1; i++)
    {
        cout << array1[i] << " ";
    }
    for (long long i = dem2 - 1; i >= 0; i--)
    {
        cout << array2[i] << " ";
    }
}