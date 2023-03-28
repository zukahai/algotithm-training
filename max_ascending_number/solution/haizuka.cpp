#include <bits/stdc++.h>

using namespace std;

int compare(string a, string b)
{
    while (a.size() < b.size())
        a = '0' + a;

    while (a.size() > b.size())
        b = '0' + b;

    for (int i = 0; i < a.size(); i++)
        if (a[i] != b[i])
            return (a[i] > b[i]) ? 1 : -1;
    return 0;
}

string generateString(string s)
{
    string ans = "", temp;
    for (int i = 0; i <= 9; i++)
    {
        temp = char(i + '0') + ans;
        if (compare(temp, s) > 0)
            return (ans == "") ? "-1" : ans;
        ans = temp;
    }
    return ans;
}

string decString(string s, int index)
{
    for (int i = index; i < s.size(); i++)
        s[i]--;
    return s;
}

string solve(string s)
{
    string p = generateString(s);
    if (p == "-1")
        return p;
    for (int i = 0; i < p.size(); i++)
    {
        for (int j = p[i] - '0' + 1; j <= 9 && (j < p[i - 1] - '0' || (i == 0)); j++)
        {
            string temp = p;
            temp[i] = (j + '0');
            if (compare(temp, s) > 0)
                break;
            p = temp;
        }
    }
}

int main()
{
    string s;
    getline(cin, s);
    cout << solve(s);
}