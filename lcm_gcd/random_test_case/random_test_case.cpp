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

int count(long long n)
{
    int ans = 0;
    for (long long i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            ans += 2;
        }
    }
    long long sqrtN = sqrt(n);
    if (sqrtN * sqrtN == n)
    {
        ans -= 1;
    }
    return ans;
}

long long solve(long long a, long long b)
{
    if (b % a != 0)
        return 0;
    return count(b / a);
}

int main()
{
    ofstream finput, foutput;

    srand(time(NULL));

    long long a, b;
    long long maxN = 10;
    for (int TC = 1; TC <= 10; TC++)
    {
        finput.open("../testcase/tc" + toString(TC) + "/input.txt");
        foutput.open("../testcase/tc" + toString(TC) + "/output.txt");
        cout << toString(TC) << endl;

        a = rand() * rand() % maxN + 1;
        b = a * (rand() * rand() % maxN + 1);

        finput << a << " " << b;
        finput.close();

        foutput << solve(a, b);
        foutput.close();
        maxN *= 100;
        if (maxN > 10000000000000000)
        {
            maxN = 10000000000000000;
        }
    }
}