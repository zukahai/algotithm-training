#include <bits/stdc++.h>
using namespace std;
const int LENGTH = 100003;

long long a[LENGTH];
long long divMin[100000];
long long divMin2[100000];

long long ucln(long long a, long long b)
{
    while (a * b != 0)
    {
        if (a > b)
        {
            a %= b;
        }
        else
        {
            b %= a;
        }
    }
    return a + b;
}
long long ucln2(long long a, long long b)
{
    if (a % b == 0)
    {
        return b;
    }
    return ucln2(b, a % b);
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long temp = a[0];
    for (int i = 0; i < n; i++)
    {
        temp = ucln2(temp, a[i]);
    }
    cout << temp;
}
