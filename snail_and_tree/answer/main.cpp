#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b, h;
    cin >> a >> b >> h;
    if (a >= h)
    {
        cout << 1;
        return 0;
    }
    cout << ((h - a) + (a - b) - 1) / (a - b) + 1;
}