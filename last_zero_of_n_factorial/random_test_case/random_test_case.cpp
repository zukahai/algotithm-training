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
    long long ans = 0;
    long long index = 5;
    while (true)
    {
        ans += n / index;
        if (index > n / 5.0)
            break;
        index *= 5;
    }
    return ans;
}
int main()
{
    ofstream finput, foutput;

    srand(time(NULL));

    long long n, minN = 2;
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

        finput << n;
        finput.close();

        foutput << solve(n);
        foutput.close();
        minN *= 30;
        if (minN > 10000000000000000)
        {
            minN = 10000000000000000;
        }
    }
}