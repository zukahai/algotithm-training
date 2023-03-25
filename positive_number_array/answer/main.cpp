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
    a[0] <= 0 ? save[0] = 0 : save[0] = 1;
    long long max = 0;
    for (int i = 1; i < n; i++)
    {
        if ( a[i]> 0)
        {
            save[i] = save[i - 1] + 1;
            if (save[i] > max)
            {
                max = save[i];
            }
        }
        else
        {
            save[i] = 0;
        }
    }
    cout << endl
         << max;
}