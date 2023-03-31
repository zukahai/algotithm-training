#include <bits/stdc++.h>
using namespace std;
long long result[100000000];
int main()
{
    long long number;
    cin >> number;
    int dem = 0;
    int c = 0;
    while (number != 0)
    {
        if (number % 2 == 1)
        {
            result[dem] = 1;
            number = (number - 1) / 2;
            c++;
        }
        else
        {
            result[dem] = 0;
            number = number / 2;
        }
        dem++;
    }
    cout << dem << " " << c << endl;
    for (int i = dem - 1; i >= 0; i--)
    {
        if (result[i] == 1)
        {
            cout << dem - i << " ";
        }
    }
}