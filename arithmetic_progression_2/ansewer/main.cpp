#include <bits/stdc++.h>
using namespace std;
long long arr[1000005];
long long arrEnd[1000005];
int main()
{
    long long n, d;
    cin >> n >> d;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    arrEnd[0] = 0;
    long long max = arrEnd[0];
    for (int i = 1; i < n; i++)
    {
        arrEnd[i] = 0;
        if (arr[i] - arr[i - 1] == d)
        {
            arrEnd[i] = 2;
        }
        for (long long j = i - 1; j >= 0; j--)
        {
            if (arr[i] - arr[j] == d && (1 + arrEnd[j]) > arrEnd[i])
            {
                if (arrEnd[j] == 0)
                {
                    arrEnd[i] = arrEnd[j] + 2;
                }
                else
                {
                    arrEnd[i] = arrEnd[j] + 1;
                }
            }
        }
        if (max < arrEnd[i])
        {
            max = arrEnd[i];
        }
    }
    cout << max;
}