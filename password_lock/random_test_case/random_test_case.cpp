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

int solve(string s, string p)
{
    int ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        int d = abs(s[i] - p[i]);
        ans += min(d, 10 - d);
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
        string s = "";
        string p = "";
        for (int i = 0; i < n; i++)
        {
            s = s + char(rand() % 10 + '0');
            p = p + char(rand() % 10 + '0');
        }
        finput << s << endl;
        finput << p;
        finput.close();

        foutput << solve(s, p);
        foutput.close();
        minN *= 10;
        if (minN > 10000)
        {
            minN = 10000;
        }
    }
}