#include <bits/stdc++.h>

using namespace std;

string toString(int n)
{
    string ans = "";
    while (n > 0)
    {
        ans = char(n % 10 + '0') + ans;
        n /= 10;
    }
    if (ans.length() == 1)
    {
        ans = "0" + ans;
    }
    return ans;
}

long long solve(long long n)
{
    long long d = 1000000007;
    long long a = n;
    long long b = n + 1;
    if (a % 2 == 0)
        a /= 2;
    else
        b /= 2;
    long long ans = ((a % d) * (b % d)) % d;
    return ans;
}

long long solve2(long long n)
{
    if (n < 0)
        return 0;
    long long d = 1000000007;
    long long a = n;
    long long b = n + 1;
    return ((a % d) * (b % d) / 2) % d;
}

int main()
{
    long long n = 3000000007;
    int index = 1;
    while (true)
    {
        if (solve2(n) != solve(n))
        {
            cout << "N = " << endl;
            break;
        }
        cout << n << endl;
        n++;
    }
    return 0;
}