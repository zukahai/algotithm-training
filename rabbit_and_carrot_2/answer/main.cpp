#include <bits/stdc++.h>
using namespace std;
const long long LENGHT = 10e5;
long long a[LENGHT];
long long save[LENGHT];
int main()
{
    long long n, k;
    cin >> n >> k;
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    save[0] = a[0];
    for (long long i = 1; i < n; i++)
    {
        long long maxBefore = save[i - 1];
        long long kTemp = 1;
        while (kTemp <= k)
        {
            if (i - kTemp < 0)
            {
                break;
            }
            if (maxBefore < save[i - kTemp])
            {
                maxBefore = save[i - kTemp];
            }
            kTemp++;
        }
        save[i] = maxBefore + a[i];
    }
    cout << save[n - 1];
}