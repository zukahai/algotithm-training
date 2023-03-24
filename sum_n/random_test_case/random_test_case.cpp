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

int main()
{
    ofstream finput, foutput;

    srand(time(NULL));

    long long n;
    long long maxN = 10;
    for (int TC = 1; TC <= 10; TC++)
    {
        finput.open("../testcase/tc" + toString(TC) + "/input.txt");
        foutput.open("../testcase/tc" + toString(TC) + "/output.txt");
        cout << toString(TC) << endl;

        n = rand() * rand() % maxN + 1;
        while (n < maxN)
        {
            n *= (rand() % 10 + 1);
        }

        finput << n;
        finput.close();

        foutput << solve(n);
        foutput.close();
        maxN *= 100;
        if (maxN > 10000000000000000)
        {
            maxN = 10000000000000000;
        }
    }
}