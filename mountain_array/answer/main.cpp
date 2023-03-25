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
    a[1] < a[0] ? save[0] = 0 : save[0] = 1;
    for (int i = 1; i < n; i++)
    {
        if (a[i] > a[i - 1])
        {
            if (save[i - 1] == 0 || save[i - 1] == 1)
            {
                save[i] = 1;
            }
            if (save[i - 1] == 2)
            {
                save[i] = 0;
            }
        }
        else if (a[i] < a[i - 1])
        {
            if (save[i - 1] == 1 || save[i - 1] == 2)
            {
                save[i] = 2;
            }
        }
    }
    for (long long i = 0; i < n; i++)
    {
        cout << save[i] << " ";
    }
}