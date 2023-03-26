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
    save[1] = a[1] + save[0];
    for (long long i = 2; i < n; i++)
    {
        if (save[i - 1] > save[i - 2])
        {
            save[i] += save[i - 1];
        }
        else
        {
            save[i] += save[i - 2];
        }
        save[i] += a[i];
    }
    cout << save[n - 1];
}