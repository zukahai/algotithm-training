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

int solve(string s)
{
    int ans = 0;
    for (int i = 0; i < s.length() - 2; i++)
    {
        string p = "";
        p = p + s[i] + s[i + 1] + s[i + 2];
        if (p == "VKU")
        {
            ans++;
        }
    }
    return ans;
}

int main()
{
    ofstream finput, foutput;

    srand(time(NULL));

    long long n, m, minN = 2;
    string s;
    string temp = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    for (int TC = 15; TC <= 15; TC++)
    {
        s = "";
        finput.open("../testcase/tc" + toString(TC) + "/input.txt");
        foutput.open("../testcase/tc" + toString(TC) + "/output.txt");
        cout << toString(TC) << endl;

        n = 100000 / 3;

        for (int i = 0; i < n; i++)
            s = s + "VKU";

        finput << s;
        finput.close();

        foutput << solve(s);
        foutput.close();
        minN *= 2;
        if (minN > 1000)
        {
            minN = 1000;
        }
    }
}