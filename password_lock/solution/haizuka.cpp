#include <bits/stdc++.h>

using namespace std;

int solve(string s, string p)
{
    int ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        int d = abs(s[i] - p[i]);
        ans += min(d, 10 - d);
    }
    return ans;
}

int main()
{
    string s, p;
    getline(cin, s);
    getline(cin, p);
    cout << solve(s, p) << endl;
}