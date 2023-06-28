#include <bits/stdc++.h>

using namespace std;

int solve(string s)
{
    int ans = 0;
    for (int i = 0; i < s.length() - 2 && s.length() >= 3; i++)
    {
        string p = "";
        p = p + s[i] + s[i + 1] + s[i + 2];
        if (p == "VKU")
        {
            ans++;
        }
    }
    return ans;
}

int main()
{
    string s;
    getline(cin, s);
    cout << solve(s);
}