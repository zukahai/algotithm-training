#include <bits/stdc++.h>
using namespace std;
const long long LENGTH = 1000004;
long long a[LENGTH];
long long result[LENGTH];
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    result[0] = 1;
    int d = a[1] - a[0];
    int max = result[0];
    for (int i = 1; i < n; i++)
    {
        if ((a[i] - a[i - 1] == d))
        {
            result[i] = result[i - 1] + 1;
        }
        else
        {
            result[i] = 2;
            d = a[i] - a[i - 1];
        }
        if (result[i] > max)
        {
            max = result[i];
        }
    }

    cout << endl
         << max;
}