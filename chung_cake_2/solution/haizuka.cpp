#include <bits/stdc++.h>

using namespace std;

long long solve(long long n, vector<long long> arr)
{
    long long d = 1000000007;
    sort(arr.begin(), arr.end());
    arr[0]++;
    arr[1]++;
    arr[2]++;

    long long temp = min(arr[1] - arr[0], n);
    n -= temp;
    arr[0] += temp;

    if (n > 0)
    {
        temp = min(n / 2, (arr[2] - arr[1]) * 2);
        n -= 2 * temp;
        arr[0] += temp;
        arr[1] += temp;
        if (n == 1)
        {
            arr[1]++;
            n = 0;
        }
    }
    if (n > 0)
    {
        arr[0] += (n / 3 + (n % 3 > 0));
        arr[1] += (n / 3 + (n % 3 == 2));
        arr[2] += (n / 3);
    }
    return ((((arr[0] % d) * (arr[1] % d)) % d) * (arr[2] % d)) % d;
}

int main()
{
    vector<long long> a(3);
    long long n;
    cin >> n >> a[0] >> a[1] >> a[2];
    cout << solve(n, a);
}