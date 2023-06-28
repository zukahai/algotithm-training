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
int a[1009][1009];
int b[1009][1009];

long long solve(int m, int n)
{
    for (int i = 0; i <= m; i++)
        b[i][0] = 0;
    for (int i = 0; i <= n; i++)
        b[0][i] = 0;
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
            b[i][j] = max(b[i - 1][j], b[i][j - 1]) + a[i][j];
    return b[m][n];
}
int main()
{
    ofstream finput, foutput;

    srand(time(NULL));

    long long m, n, minN = 2;
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
        m = (rand() % 10 + 1);
        while (m < minN)
        {
            m = m * (rand() % 10 + 1);
        }

        finput << m << " " << n << endl;
        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= n; j++)
                a[i][j] = rand() % (m + n);
        }
        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= n; j++)
                finput << a[i][j] << " ";
            finput << endl;
        }

        finput.close();

        foutput << solve(m, n);
        foutput.close();
        minN *= 10;
        if (minN > 100)
        {
            minN = 100;
        }
    }
}