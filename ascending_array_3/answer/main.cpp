#include <bits/stdc++.h>
using namespace std;
const long long LENGHT = 10003;
long long a[LENGHT];
long long arrayEnd[LENGHT];
long long arrayStart[LENGHT];
long long result[LENGHT];
int main()
{
    long long n;
    cin >> n;
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    arrayEnd[0] = 1;
    for (int i = 1; i < n; i++)
    {
        if (a[i] > a[i - 1])
        {
            arrayEnd[i] = arrayEnd[i - 1] + 1;
        }
        else
        {
            arrayEnd[i] = 1;
        }
    }
    arrayStart[n - 1] = 1;
    for (int i = n - 2; i >= 0; i--)
    {
        if (a[i] < a[i - 1])
        {
            arrayStart[i] = arrayStart[i + 1] + 1;
        }
        else
        {
            arrayStart[i] = 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arrayEnd[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arrayStart[i] << " ";
    }
}