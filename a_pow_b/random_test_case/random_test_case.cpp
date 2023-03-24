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

int solve(long long a, long long b, int mod)
{
    long long ans = 1;
    while (b > 0)
    {
        if (b % 2 == 1)
        {
            ans = (ans * a) % mod;
            b--;
        }
        a = (a * a) % mod;
        b /= 2;
    }
    return ans;
}

int main()
{
    ofstream finput, foutput;
    long long a, b;

    srand(time(NULL));
    int maxN = 100;
    for (int TC = 1; TC <= 10; TC++)
    {
        finput.open("../testcase/tc" + toString(TC) + "/input.txt");
        foutput.open("../testcase/tc" + toString(TC) + "/output.txt");
        cout << toString(TC) << endl;

        do
        {
            a = rand() * rand() * rand() % maxN + 1;
            b = rand() * rand() * rand() % maxN + 1;

        } while (a < 0 || b < 0 || a + b == 0);

        finput << a << " " << b;
        finput.close();
        foutput << solve(a, b, 10000);
        foutput.close();
        maxN *= 10;
        if (maxN > 1000000000000)
        {
            maxN = 1000000000000;
        }
    }
}