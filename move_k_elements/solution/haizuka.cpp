#include <bits/stdc++.h>

using namespace std;

string solve(string s, int k)
{
    int number = s.length() - k;
    int start = 0;
    string ans = "";
    for (int i = 0; i < number; i++)
    {
        int indexMax = start;
        for (int j = start + 1; j <= s.length() - number + i; j++)
        {
            if (s[j] > s[indexMax])
            {
                indexMax = j;
            }
        }
        ans += s[indexMax];
        start = indexMax + 1;
    }
    return ans;
}

int main()
{
    string s;
    int k;
    cin >> s >> k;
    cout << solve(s, k) << endl;
}