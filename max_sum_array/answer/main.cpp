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
    save[0] = a[0];
    long long summax = save[0];
    for (int i = 1; i < n; i++)
    {
        if (save[i - 1] > 0)
        {
            save[i] = save[i - 1] + a[i];
            if (save[i] > summax)
            {
                summax = save[i];
            }
        }
        else
        {
            save[i] = a[i];
        }
    }
    cout << endl
         << summax;
}