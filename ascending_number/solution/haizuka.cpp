#include <bits/stdc++.h>

using namespace std;

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
    string s;
    getline(cin, s);
    cout << solve(s);
}