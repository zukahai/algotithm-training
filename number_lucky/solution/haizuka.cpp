#include <bits/stdc++.h>

using namespace std;

string toString2(int n)
{
    string ans = "";
    while (n > 0)
    {
        ans = char(n % 10 + '0') + ans;
        n /= 10;
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
    getline(cin, s);
    cout << solve(s);
}