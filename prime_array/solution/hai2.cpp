#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n)
{
    if (n < 2)
    {
        return false;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int t, n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        if (t > 0 && isPrime(t))
        {
            cout << t << " ";
        }
    }
}