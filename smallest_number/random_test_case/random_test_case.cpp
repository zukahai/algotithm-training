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

string solve(long long n)
{
    string ans = "";
    for (int i = 9; i >= 2; i--)
    {
        while (n % i == 0)
        {
            n /= i;
            ans = char(i + '0') + ans;
        }
    }
    if (n > 1)
        return "-1";
    return ans;
}

long long generate(long long maxN)
{
    srand(time(NULL));
    long long ans = 1;
    while (ans < maxN)
    {
        ans *= (rand() % 9 + 1);
    }
    return ans;
}

int main()
{
    // ofstream finput, foutput;

    // srand(time(NULL));

    // long long n;
    // long long maxN = 100;
    // for (int TC = 1; TC <= 10; TC++)
    // {
    //     finput.open("../testcase/tc" + toString(TC) + "/input.txt");
    //     foutput.open("../testcase/tc" + toString(TC) + "/output.txt");
    //     cout << toString(TC) << endl;

    //     long long n = rand() * rand() % maxN + maxN / 10;
    //     if (rand() % 2 == 0)
    //     {
    //         n = generate(maxN);
    //     }
    //     cout << "N = " << n << endl;

    //     finput << n << endl;

    //     finput.close();
    //     foutput << solve(n);
    //     foutput.close();

    //     maxN *= 100;
    //     if (maxN > 1000000000000000)
    //     {
    //         maxN = 1000000000000000;
    //     }
    // }
    long long n = 5;
    while (n < 100000000000000000)
    {
        n *= 5;
        cout << "5";
    }
    cout << endl;
    cout << n;
}