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

long long solve(int n)
{
    long long count = 0;
    for (int a = 1; a <= n; a++)
        for (int b = a; b <= n; b++)
        {
            int maxC = a + b - 1;
            maxC = min(maxC, n);
            count += (maxC - b + 1);
        }
    return count;
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
        if (minN > 1000)
        {
            minN = 1000;
        }
    }
}