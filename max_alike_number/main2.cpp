#include <bits/stdc++.h>
using namespace std;

string compareLargeNumbers(string a, string b)
{
    if (a.length() > b.length())
    {
        return a;
    }
    else if (a.length() > b.length())
    {
        return b;
    }

    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] > b[i])
        {
            return a;
        }
        else if (a[i] < b[i])
        {
            return b;
        }
    }
    return a;
}

int main()
{
    string a, b;
    getline(cin, a);
    getline(cin, b);
    cout << compareLargeNumbers(a, b);
}