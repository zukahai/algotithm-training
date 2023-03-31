#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    cin >> n;
    long long length = n.length();
    if (n[0] == '-')
    {
        cout << 1;
        return 0;
    }
    char first = n.substr(0, 1)[0];
    for (int i = 0; i < length; i++)
    {
        if (n[i] != first)
        {
            if (n[i] > first)
            {
                break;
            }
            else
            {
                string str(length, first);
                cout << str;
                return 0;
            }
        }
    }
    if (first < '9')
    {
        string str(length, n[0] + 1);
        cout << str;
    }
    else
    {
        string str(length + 1, '1');
        cout << str;
    }
}