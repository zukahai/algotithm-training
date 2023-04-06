#include <bits/stdc++.h>
using namespace std;
int main()
{
    string number;
    long long k;
    cin >> number >> k;
    while (k != 0)
    {
        char min = number[0];
        long long index = 0;
        for (long long i = 0; i < number.length(); i++)
        {
            if (min > number[i])
            {
                min = number[i];
                index = i;
            }
        }
        number[index] = '_';
        k--;
    }
    string res = "";
    for (long long i = 0; i < number.length(); i++)
    {
        if (number[i] != '_')
        {
            res += number[i];
        }
    }
    cout << res;
}