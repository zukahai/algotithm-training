#include <bits/stdc++.h>

using namespace std;

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
    string s;
    getline(cin, s);
    cout << solve(s);
}