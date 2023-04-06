#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b, c;
    getline(cin, a);
    getline(cin, b);
    long long dem = 0;
    for (int i = 0; i < a.length() + c.length(); i += 2)
    {
        if (a[i] > a[i + 1])
        {
            int k = (a[i] - '0') - (a[i+1] - '0');
            while (k != 0)
            {
                dem += 1;
                c[dem] = ' ';
                k--;
            }
        }
        else
        {
            c[dem] = a[i];
            dem++;
        }
    }
    cout << c;
}