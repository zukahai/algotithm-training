#include <bits/stdc++.h>
using namespace std;

string getResult(string s)
{
    for (int i = 0; i < s.length() / 2; i++)
    {
        if (s[i] != s[s.length() - (i + 1)])
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
    string temp;
    cout << getResult(s);
}