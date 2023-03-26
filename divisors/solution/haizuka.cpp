#include <bits/stdc++.h>

using namespace std;

vector<long long> solve(long long n)
{
    vector<long long> divisors;
    for (long long i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            divisors.push_back(i);
            if (i * i != n)
            {
                divisors.push_back(n / i);
            }
        }
    }
    sort(divisors.begin(), divisors.end());
    return divisors;
}

int main()
{
    long long n;
    cin >> n;
    vector<long long> divides = solve(n);
    for (auto d : divides)
    {
        cout << d << " ";
    }
    return 0;
}