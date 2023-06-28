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
    int minL, maxR, position = 0;
    minL = maxR = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'L')
        {
            position--;
        }
        else
        {
            position++;
        }
        minL = min(minL, position);
        maxR = max(maxR, position);
    }
    return maxR - minL + 1;
}
int main()
{
    ofstream finput, foutput;

    srand(time(NULL));

    long long n;
    long long maxN = 10;
    for (int TC = 14; TC <= 15; TC++)
    {
        string s = "";
        finput.open("../testcase/tc" + toString(TC) + "/input.txt");
        foutput.open("../testcase/tc" + toString(TC) + "/output.txt");
        cout << toString(TC) << endl;

        n = 100000;

        for (int i = 0; i < n; i++)
        {
            if (TC == 14)
                s = s + 'L';
            else
                s = s + 'R';
        }
        finput << s;

        foutput << solve(s);
        foutput.close();
        maxN *= 3;
        if (maxN > 10000)
        {
            maxN = 10000;
        }
        finput.close();
    }
}