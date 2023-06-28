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
    string ans = "YES";
    if (s[0] == '-')
        return "NO";
    for (int i = 1; i < s.size(); i++)
        if (s[i] >= s[i - 1])
            return "NO";
    return "YES";
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
        if (minN > 100)
        {
            minN = 100;
        }
    }
}