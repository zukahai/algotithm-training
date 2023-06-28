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
    vector<int> a(10, 0);
    for (int i = 0; i < s.length(); i++)
    {
        a[s[i] - '0']++;
        if (a[s[i] - '0'] > 1)
            return "NO";
    }
    return "YES";
}
int main()
{
    ofstream finput, foutput;

    srand(time(NULL));

    long long n;
    long long maxN = 1;
    for (int TC = 1; TC <= 15; TC++)
    {
        string s = "";
        finput.open("../testcase/tc" + toString(TC) + "/input.txt");
        foutput.open("../testcase/tc" + toString(TC) + "/output.txt");
        cout << toString(TC) << endl;

        n = TC;

        for (int i = 0; i < n; i++)
        {
            s = s + char(rand() % 10 + '0');
        }
        finput << s;

        foutput << solve(s);
        foutput.close();
        maxN++;
        if (maxN > 10000)
        {
            maxN = 10000;
        }
        finput.close();
    }
}