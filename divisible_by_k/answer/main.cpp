#include <bits/stdc++.h>
using namespace std;
long long arr[100000008];
long long counts[100000008];
int main()
{
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n * 2; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n * 2 - 1; i += 2)
    {
        int temp = arr[i + 1] / k;
        if (arr[i] < k)
        {
            cout << temp << endl;
            continue;
        }
        if (arr[i] >= k)
        {
            int temp2 = (arr[i] - 1) / k;
            cout << temp - temp2 << endl;
            continue;
        }
    }
}