#include <bits/stdc++.h>

using namespace std;

long long x[20];
vector<long long> factorize;

bool isPrime(long long n)
{
    if (n < 2)
        return false;
    for (long long i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

void gen(int i, int n)
{
    for (int j = 0; j <= 9; j++)
    {
        x[i] = x[i - 1] * 10 + j;
        if (isPrime(x[i]))
        {
            if (i == n)
                factorize.push_back(x[i]);
            else
            {
                gen(i + 1, n);
            }
        }
    }
}

int main()
{
    x[0] = 0;
    int n;
    cin >> n;
    gen(1, n);
    for (int i = 0; i < factorize.size(); i++)
    {
        cout << factorize[i] << " ";
    }
    if (factorize.size() == 0)
    {
        cout << "-1";
    }
    return 0;
}