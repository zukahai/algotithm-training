#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a >= b && a >= c)
    {
        cout << 'a';
    }
    else if (b >= a && b >= c)
    {
        cout << 'b';
    }
    else if (c >= b && c >= a)
    {
        cout << 'c';
    }
}
