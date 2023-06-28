#include <bits/stdc++.h>

using namespace std;

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
    string s;
    cin >> s;
    cout << solve(s);
}