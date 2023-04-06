#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    int dem = 0;
    string vku = "VKU";
    if (s.length() < 3)
    {
        cout << "0";
        return 0;
    }
    for (int i = 0; i < s.length() - 2; i++)
    {
        if (s.substr(i, 3) == vku)
        {
            dem += 1;
            i += 2;
        }
    }
    cout << dem;
}