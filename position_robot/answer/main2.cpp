#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int dem = 1;
    int duong = 0;
    int am = 0;
    int current = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'L')
        {
            current -= 1;
        }
        else if (s[i] == 'R')
        {
            current += 1;
        }
        if (current > 0)
        {
            duong = max(current, duong);
        }
        if (current < 0)
        {
            am = min(current, am);
        }
    }
    cout << duong + abs(am) + 1;
}