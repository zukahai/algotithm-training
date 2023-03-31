#include <bits/stdc++.h>
using namespace std;
long long arr[100003];
long long check[100003];
int main()
{
    long long n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        check[abs(arr[i])] = 0;
    }
    
}