#include <bits/stdc++.h>
using namespace std;
long long arr[1000008];
long long arr1[1000008];
int main()
{
    string s;
    getline(cin, s);
    arr[0] = 0;
    arr1[0] = 1;
    for (int i = 1; i < 1000008; i++)
    {
        arr[i] = 0;
        arr1[i] = 0;
    }
    long long current = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'L')
        {
            current -= 1;
        }
        else
        {
            current += 1;
        }
        if (current < 0)
        {
            if (arr[abs(current)] < 1)
            {
                arr[abs(current)] += 1;
            }
        }
        else
        {
            if (arr1[abs(current)] < 1)
            {
                arr1[abs(current)] += 1;
            }
        }
    }
    long long dem = 0;
    for (int i = 0; i < 1000008; i++)
    {
        dem += arr[i];
    }
    for (int i = 0; i < 1000008; i++)
    {
        dem += arr1[i];
    }
    cout << dem;
}