#include <bits/stdc++.h>
using namespace std;
long long a[100005];
int main()
{
    int n, k;
    cin >> n >> k;
    int dem = 1;
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        int current;
        cin >> current;
        if (current + sum <= k)
        {
            sum += current;
        }
        else
        {
            dem++;
            sum = current;
        }
    }
    cout << dem;
}