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
    for (int i = 9; i >= 0; i--)
    {
        temp = ans + char(i + '0');
        if (compare(s, temp) <= 0)
            return temp;
        ans = temp;
    }
    return "-1";
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
        while (p[p.size() - 1] != '0')
        {
            string tem2 = decString(p, i);
            if (compare(tem2, s) < 0)
                break;
            p = tem2;
        }
    }
}

int main()
{
    string s;
    getline(cin, s);
    cout << solve(s);
}