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
    long long mod = 1000000007;
    long long k = (n + 1) / 2;
    long long h = n - k;
    long long t1, t2, t3;
    k %= mod;
    h %= mod;
    long long ans = 0;
    ans += ((((n % mod) * (k % mod) % mod) * ((k + 1) % mod) % mod) / 2) % mod;

    t1 = k;
    t2 = k + 1;
    t3 = 2 * k + 1;
    if (t1 % 3 == 0)
        t1 /= 3;
    else if (t2 % 3 == 0)
        t2 /= 3;
    else if (t3 % 3 == 0)
        t3 /= 3;

    ans -= ((((t1 % mod) * (t2 % mod) % mod) % mod) * (t3 % mod)) % mod;
    ans %= mod;

    ans += ((k % mod) * (k + 1) % mod) % mod;
    ans % mod;

    t1 = k + 1;
    t2 = k * k - k;
    if (t1 % 2 == 0)
        t1 /= 2;
    else if (t2 % 2 == 0)
        t2 /= 2;
    if (t1 % 3 == 0)
        t1 /= 3;
    else if (t2 % 3 == 0)
        t2 /= 3;

    ans += (t1 % mod) * (t2 % mod) % mod;
    ans %= mod;

    t1 = h + 1;
    t2 = h * h + 2 * h;
    if (t1 % 2 == 0)
        t1 /= 2;
    else if (t2 % 2 == 0)
        t2 /= 2;
    if (t1 % 3 == 0)
        t1 /= 3;
    else if (t2 % 3 == 0)
        t2 /= 3;

    ans += (t1 % mod) * (t2 % mod) % mod;
    ans %= mod;

    return ans % mod;
}

int main()
{
    ofstream finput, foutput;

    srand(time(NULL));

    long long n, minN = 3;
    for (int TC = 1; TC <= 15; TC++)
    {
        finput.open("../testcase/tc" + toString(TC) + "/input.txt");
        foutput.open("../testcase/tc" + toString(TC) + "/output.txt");
        cout << toString(TC) << endl;

        n = rand() % 10;
        while (n < minN)
        {
            n = n * 10 + rand() % 10;
        }

        finput << n;
        finput.close();

        foutput << solve(n);
        foutput.close();
        minN *= 3;
        if (minN > 100000000000000000)
        {
            minN = 100000000000000000;
        }
    }
}