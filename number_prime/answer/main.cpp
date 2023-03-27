// The number that appears the most
#include <bits/stdc++.h>
using namespace std;
const long LENGTH = 10000003;
long long a[LENGTH];
bool checkPrime[LENGTH];
long long save[LENGTH];
int main()
{
    long long n;
    cin >> n;
    for (long long i = 0; i < n * 2; i++)
    {
        cin >> a[i];
    }
    checkPrime[0] = checkPrime[1] = false;
    for (long long i = 2; i < LENGTH; i++)
    {
        checkPrime[i] = true;
    }
    for (long long i = 2; i < sqrt(LENGTH); i++)
    {
        if (checkPrime[i] == true)
        {
            for (long long j = i * 2; j < LENGTH; j += i)
            {
                checkPrime[j] = false;
            }
        }
    }
    save[0] = save[1] = 0;
    for (long long i = 2; i < LENGTH; i++)
    {
        if (checkPrime[i] == true)
        {
            save[i] = save[i - 1] + 1;
        }
        else
        {
            save[i] = save[i - 1];
        }
    }
    for (long long i = 0; i < n * 2; i += 2)
    {
        if (a[i] < 1)
        {
            a[i] = 1;
        }
        if (a[i + 1] < 0)
        {
            cout << 0 << endl;
            continue;
        }
        cout << save[a[i + 1]] - save[a[i] - 1] << endl;
    }
    return 0;
}