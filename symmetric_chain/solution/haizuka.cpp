#include <bits/stdc++.h>

using namespace std;

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

int main()
{
    string s;
    getline(cin, s);
    cout << solve(s) << endl;
}