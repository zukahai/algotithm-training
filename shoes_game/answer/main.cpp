#include <bits/stdc++.h>
using namespace std;
const long long LENGHT = 1000005;
long long a[LENGHT];
int main()
{
    long long n;
    cin >> n;
    for (long long i = 0; i < n * 2 - 1; i++)
    {
        cin >> a[i];
    }
    long long sum = 0;
    for (long long i = 0; i < n * 2 - 1; i++)
    {
        sum += a[i];
    }
    cout << -sum;
}