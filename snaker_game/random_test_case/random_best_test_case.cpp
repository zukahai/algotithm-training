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

long long sum(vector<long long> a, int index1, int index2)
{
    if (index1 > index2)
        swap(index1, index2);
    if (index1 == 0)
    {
        return a[index2];
    }
    return a[index2] - a[index1 - 1];
}

long long solve(vector<vector<long long>> a)
{
    long long ans = 0;
    int m = a.size();
    int n = a[0].size();
    vector<vector<long long>> b = a;
    vector<long long> c(n, 0);
    c[0] = a[0][0];
    for (int i = 1; i < n; i++)
        c[i] = c[i - 1] + a[0][i];
    for (int j = 0; j < n; j++)
    {
        b[0][j] = c[j];
        for (int j2 = 0; j2 < n; j2++)
        {
            b[0][j] = max(b[0][j], sum(c, j, j2));
        }
    }
    for (int row = 1; row < m; row++)
    {
        c[0] = a[row][0];
        for (int i = 1; i < n; i++)
            c[i] = c[i - 1] + a[row][i];
        for (int j = 0; j < n; j++)
        {
            b[row][j] = a[row][j] + b[row - 1][j];
            for (int j2 = 0; j2 < n; j2++)
            {
                b[row][j] = max(b[row][j], sum(c, j, j2) + b[row - 1][j2]);
            }
        }
    }
    ans = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            ans = max(ans, b[i][j]);
    }
    return ans;
}

int main()
{
    ofstream finput, foutput;

    srand(time(NULL));

    long long n, m, minN = 2;
    for (int TC = 14; TC <= 15; TC++)
    {
        vector<vector<long long>> a;
        finput.open("../testcase/tc" + toString(TC) + "/input.txt");
        foutput.open("../testcase/tc" + toString(TC) + "/output.txt");
        cout << toString(TC) << endl;

        n = m = 100;
        for (int i = 0; i < m; i++)
        {
            vector<long long> b;
            for (int j = 0; j < n; j++)
            {
                long long x = (TC == 14) ? 10000 : -10000;
                b.push_back(x);
            }
            a.push_back(b);
        }

        finput << m << " " << n << endl;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
                finput << a[i][j] << " ";
            finput << endl;
        }
        finput.close();

        foutput << solve(a);
        foutput.close();
        minN *= 2;
        if (minN > 90)
        {
            minN = 90;
        }
    }
}