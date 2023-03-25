#include <bits/stdc++.h>

using namespace std;

long long sum(long long n)
{
    return n * (n + 1) / 2;
}

int main()
{
    long long a, b;
    cin >> a >> b;
    cout << sum(b) - sum(a - 1) << endl;
}