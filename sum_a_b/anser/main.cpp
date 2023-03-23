#include <bits/stdc++.h>
using namespace std;

long long sum(long long a, long long b)
{
    if (a > b)
    {
        return 0;
    }
    long long sum = 0;
    long long lenght = (b - a) + 1;
    cout << lenght << endl;
    if (lenght % 2 == 0)
    {
        return (a + b) * (lenght / 2);
    }
    sum = ((b - 1) + a) * ((lenght - 1) / 2) + b;
    return sum;
}
int main()
{
    long long a, b;
    // long long sum = 0;
    cin >> a >> b;
    cout << sum(a, b);
    // for (long long i = a; i <= b; i++)
    // {
    //     sum += i;
    // }
    // cout << sum;
}