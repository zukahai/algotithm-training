#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    cin >> n;
    long long length = n.length();
    if (n[0] == '-')
    {
        cout << -1;
        return 0;
    }

    if (length < 2)
    {
        if (n[0] <= '1')
        {
            cout << -1;
            return 0;
        }

        if (n[0] <= '9')
        {
            cout << char((int)(n[0]) - 1);
        }
    }
    if (length > 1)
    {
        char first = n.substr(0, 1)[0];
        for (int i = 0; i < length; i++)
        {
            if (n[i] != first)
            {
                if (n[i] > first)
                {
                    string str(length, n[0]);
                    cout << str;
                    return 0;
                }
                else
                {
                    break;
                }
            }
        }
        if (n[0] == '1')
        {
            string str(length - 1, '9');
            cout << str;
            return 0;
        }
        string str(length, n[0] - 1);
        cout << str;
    }
}