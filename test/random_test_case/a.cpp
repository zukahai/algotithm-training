#include <bits/stdc++.h>

using namespace std;

string getPath(string s)
{
    string p = "";
    int count = 0;
    for (int i = s.length() - 1; i >= 0 && p.length() == 0; i--)
    {
        if (s[i] == '\\')
        {
            count++;
            if (count == 2)
            {
                return s.substr(0, i);
            }
        }
    }
    return "";
}

int main(int argc, char *argv[])
{
    cout << getPath(argv[0]);
}