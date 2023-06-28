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

int solve(vector<int> a)
{
    int max_A = 1000000000;
    vector<int> b(a.size(), 0);
    vector<int> c(a.size(), 0);
    int ans = 0;
    b[0] = 1;
    for (int i = 1; i < a.size(); i++)
    {
        b[i] = ((a[i] > a[i - 1]) ? b[i - 1] + 1 : 1);
    }
    c[c.size() - 1] = 1;
    for (int i = a.size() - 2; i >= 0; i--)
    {
        c[i] = ((a[i] < a[i + 1]) ? c[i + 1] + 1 : 1);
    }
    ans = b[0];
    for (int i = 0; i < a.size(); i++)
        ans = max(ans, b[i]);

    for (int i = 1; i < a.size(); i++)
        if (c[i] + 1 > ans && a[i] > -max_A)
            ans = c[i] + 1;
    for (int i = 0; i < a.size() - 1; i++)
        if (b[i] + 1 > ans && a[i] < max_A)
            ans = b[i] + 1;
    for (int i = 1; i < a.size() - 1; i++)
        if (a[i + 1] - a[i - 1] > 1 && b[i - 1] + c[i + 1] + 1 > ans)
            ans = b[i - 1] + c[i + 1] + 1;
    return ans;
}
vector<int> a;
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

        finput << n << endl;
        a.resize(n);
        for (int i = 0; i < n; i++)
        {
            a[i] = (rand() * rand() - rand() * rand()) % minN + 1;
        }
        for (int i = 0; i < n; i++)
        {
            finput << a[i] << " ";
        }
        finput.close();

        foutput << solve(a);
        foutput.close();
        minN *= 10;
        if (minN > 10000)
        {
            minN = 10000;
        }
    }
}