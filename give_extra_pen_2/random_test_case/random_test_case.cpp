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

long long solve(long long n, long long a, long long b)
{
    long long ans = (n / (a + b)) * a;
    ans += min(n % (a + b), a);
    return ans;
}

int main()
{
    ofstream finput, foutput;

    srand(time(NULL));

    long long n, a, b, minN = 2;
    for (int TC = 1; TC <= 10; TC++)
    {
        finput.open("../testcase/tc" + toString(TC) + "/input.txt");
        foutput.open("../testcase/tc" + toString(TC) + "/output.txt");
        cout << toString(TC) << endl;

        n = (rand() % 10 + 1);
        while (n < minN)
        {
            n = n * (rand() % 10 + 1);
        }
        a = (rand() % (n - 1) + 1);
        b = (rand() % (n - 1) + 1);

        finput << n << endl;
        finput << a << " " << b;
        finput.close();

        foutput << solve(n, a, b);
        foutput.close();
        minN *= 15;
        if (minN > 100000000000000000)
        {
            minN = 100000000000000000;
        }
    }
}