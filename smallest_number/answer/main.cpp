// Tìm số nguyên dương M nhỏ nhất sao cho tích các số trong M đúng bằng N.
// Input: N (1 ≤ N ≤ 10^18)

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long m = 1;
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            m *= i;
            while (n % i == 0)
            {
                n /= i;
            }
        }
    }
    cout << m;
}