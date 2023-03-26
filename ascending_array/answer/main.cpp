#include <bits/stdc++.h>
using namespace std;
const long long LENGHT = 10e5;
long long a[LENGHT];
long long save[LENGHT];
int main()
{
    long long n;
    cin >> n;
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    save[0] = 1;
    long long max = save[0];
    for (long long i = 1; i < n; i++)
    {
        save[i] = 1;
        for (long long j = i - 1; j >= 0; j--)
        {
            if (a[i] > a[j] && ( 1 + save[j]) > save[i])
            {
                save[i] = save[j] + 1;
            }
        }
        if (save[i] > max)
        {
            max = save[i];
        }
    }
    cout << endl
         << max;
}