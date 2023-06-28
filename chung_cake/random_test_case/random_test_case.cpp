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
    long long a = 1 + n / 3;
    long long b = 1 + n / 3 + (n % 3 == 2);
    long long c = 1 + n / 3 + (n % 3 == 1 || n % 3 == 2);
    a %= d;
    b %= d;
    c %= d;
    return (((a % d) * (b % d) % d) * (c % d)) % d;
}

int main()
{
    ofstream finput, foutput;

    srand(time(NULL));

    long long n, minN = 2;
    for (int TC = 2; TC <= 13; TC++)
    {
        finput.open("../testcase/tc" + toString(TC) + "/input.txt");
        foutput.open("../testcase/tc" + toString(TC) + "/output.txt");
        cout << toString(TC) << endl;

        n = rand() % 10;
        ;
        while (n < minN)
        {
            n = n * 10 + rand() % 10;
        }

        finput << n << endl;
        finput.close();

        foutput << solve(n);
        foutput.close();
        minN *= 15;
        if (minN > 100000000000000000)
        {
            minN = 100000000000000000;
        }
    }
}