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

string solve(string s)
{
    if (s[0] == '-' || s[0] == '0')
        return "-1";
    if (s == "1")
        return "-1";
    string ans = "";
    int status = 0;
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] > s[i - 1])
        {
            status = 1;
            break;
        }
        if (s[i] < s[i - 1])
        {
            status = 0;
            break;
        }
    }
    char ch;
    switch (status)
    {
    case 0:
        if (s[0] == '1')
        {
            ch = '9';
            s = s.substr(1, s.length() - 1);
        }
        else
            ch = s[0] - 1;

        for (int i = 0; i < s.length(); i++)
            ans = ans + ch;
        break;
    case 1:
        ch = s[0];
        for (int i = 0; i < s.length(); i++)
            ans = ans + ch;
        break;
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

        n = minN;
        string s = "";
        s = s + char(rand() % 9 + '1');
        for (int i = 0; i < n; i++)
            s = s + char(rand() % 10 + '0');

        finput << s << endl;
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