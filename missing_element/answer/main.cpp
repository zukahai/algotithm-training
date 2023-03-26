#include <bits/stdc++.h>
using namespace std;
const long long LENGHT = 10e5 + 1;
long long a[LENGHT];
bool save[LENGHT];
int main()
{
    long long n;
    cin >> n;
    for (long long i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (long long i = 1; i <= n; i++)
    {
        save[i] = false;
    }
    for (long long i = 1; i <= n; i++)
    {
        save[a[i]] = true;
    }
    for (long long i = 1; i <= n; i++)
    {
        if (save[i] == false)
        {
            cout << i;
            break;
        }
    }
}