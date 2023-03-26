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
    save[0] = a[0] % 2 == 0 ? 1 : -1;
    for (long long i = 1; i < n; i++)
    {
        if (a[i] == 0)
        {
            save[i] = 0;
        }

        if ((a[i] % 2 == 0) && (save[i - 1] > 0))
        {
            save[i] = save[i - 1] + 1;
        }
        else if ((a[i] % 2 != 0) && (save[i - 1] < 0))
        {
            save[i] = save[i - 1] - 1;
        }
        else
        {
            save[i] = a[i] % 2 == 0 ? 1 : -1;
        }
    }
    long long max = 0;
    for (long long i = 0; i < n; i++)
    {
        if ((abs(save[i])) > (abs(save[max])))
        {
            max = i;
        }
    }
    for (long long i = (max - abs(save[max])) + 1; i <= max; i++)
    {
        cout << a[i] << " ";
    }
}