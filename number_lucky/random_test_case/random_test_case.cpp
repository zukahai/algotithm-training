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
    if (s[0] == '-')
        return "NO";
    for (int i = 0; i < s.length(); i++)
        if (s[i] != '4' && s[i] != '7')
            return "NO";
    return "YES";
}
int main()
{
    string s;
    ofstream finput, foutput;
    string temp = "47";

    srand(time(NULL));

    int n, minN = 3;
    for (int TC = 1; TC <= 15; TC++)
    {
        s = "";
        finput.open("../testcase/tc" + toString(TC) + "/input.txt");
        foutput.open("../testcase/tc" + toString(TC) + "/output.txt");
        cout << toString(TC) << endl;

        n = TC * 6 + rand() % 10;
        for (int i = 0; i < n; i++)
            s = s + temp[rand() % 2];
        for (int i = 0; i < s.length(); i++)
            if (rand() % s.length() == 0)
                s[i] = rand() % 10 + '0';

        finput << s;
        finput.close();

        foutput << solve(s);
        foutput.close();
    }
}