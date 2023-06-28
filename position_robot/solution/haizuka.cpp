#include <bits/stdc++.h>

using namespace std;

int solve(string s)
{
    int minL, maxR, position = 0;
    minL = maxR = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'L')
        {
            position--;
        }
        else
        {
            position++;
        }
        minL = min(minL, position);
        maxR = max(maxR, position);
    }
    return maxR - minL + 1;
}

int main()
{
    string s;
    cin >> s;
    cout << solve(s);
}