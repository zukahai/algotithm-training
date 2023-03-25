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
    long long max =  save[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > a[i - 1])
        {
            save[i] = save[i - 1] + 1;
            if (save[i] > max)
            {
                max = save[i];
            }
        }
        else
        {
            save[i] = 1;
        }
    }
    cout << endl
         << max;
}