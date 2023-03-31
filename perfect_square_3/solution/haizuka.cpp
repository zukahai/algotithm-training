#include <bits/stdc++.h>

using namespace std;

long long solve(long long n)
{
    long long index = 2;
    long long ans = 1;
    long long N = n;
    while (index * index <= N && n > 1)
    {
        int count = 0;
        while (n % index == 0)
        {
            n /= index;
            count++;
        }
        if (count % 2 == 1)
        {
            ans *= index;
        }
        index++;
    }
    ans *= n;
    return ans;
}

int main()
{
    long long n;
    cin >> n;
    cout << solve(n);
}