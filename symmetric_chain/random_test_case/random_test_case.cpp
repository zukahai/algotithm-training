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
    for (int i = 0; i < s.size() / 2; i++)
    {
        if (s[i] != s[s.size() - 1 - i])
        {
            return "NO";
        }
    }
    return "YES";
}

string generateString(int n)
{
    string chars = "abcdefghijklmnopqrstuvwxyz";
    string ans = "";
    while (n--)
    {
        ans = chars[rand() % chars.length()] + ans;
    }
    if (rand() % 3 < 2)
    {
        for (int i = 0; i < ans.size() / 2; i++)
            ans[i] = ans[ans.size() - 1 - i];
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
        string s = generateString(n);
        finput << s << endl;
        finput.close();

        foutput << solve(s);
        foutput.close();
        minN *= 10;
        if (minN > 10000)
        {
            minN = 10000;
        }
    }
}