#include <bits/stdc++.h>
using namespace std;
const long long LENGHT = 10e5;
long long a[LENGHT];
long long save[LENGHT];
long long save2[LENGHT];
long long save3[LENGHT];
int main()
{
    long long n;
    cin >> n;
    if (n <= 2)
    {
        cout << n;
        return 0;
    }
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    save[0] = 1;
    for (int i = 1; i < n; i++)
    {
        if (a[i] == a[i - 1])
        {
            save[i] = save[i - 1] + 1;
        }
        else
        {
            save[i] = 1;
        }
    }
    save2[n - 1] = 1;
    for (long long i = n - 2; i >= 0; i--)
    {
        if (a[i] == a[i + 1])
        {
            save2[i] = save2[i + 1] + 1;
        }
        else
        {
            save2[i] = 1;
        }
    }
    save3[0] = save2[1] + 1;
    save3[n - 1] = save[n - 2] + 1;
    long long max = save3[0] > save3[n - 1] ? save3[0] : save3[n - 1];
    for (long long i = 1; i < n - 1; i++)
    {
        if (a[i - 1] == a[i + 1])
        {
            save3[i] = save[i - 1] + save2[i + 1] + 1;
        }
        else
        {
            if (save[i - 1] > save2[i + 1])
            {
                save3[i] = save[i - 1] + 1;
            }
            else
            {
                save3[i] = save2[i + 1] + 1;
            }
        }
        if (save3[i] > max)
        {
            max = save3[i];
        }
    }
    cout << max;
}