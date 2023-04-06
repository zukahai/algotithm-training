#include <bits/stdc++.h>
using namespace std;
long long arraycheck[10000008];
int main()
{
    string number;
    getline(cin, number);
    if (number.length() > 10)
    {
        cout << "NO";
        return 0;
    }
    for (int i = 0; i < number.length(); i++)
    {
        arraycheck[i] = 0;
    }
    for (int i = 0; i < number.length(); i++)
    {
        arraycheck[number[i] - '0'] += 1;
    }
    for (int i = 0; i < number.length(); i++)
    {
        if (arraycheck[number[i] - '0'] > 1)
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}
