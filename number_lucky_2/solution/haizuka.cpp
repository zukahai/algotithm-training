#include <bits/stdc++.h>

using namespace std;

string toString2(int n)
{
    string ans = "";
    while (n > 0)
    {
        ans = char(n % 10 + '0') + ans;
        n /= 10;
    }
    return ans;
}

string solve(long long n)
{
    if (n < 0)
        return "NO";
    while (n > 0)
    {
        if (n % 4 == 0)
            return "YES";
        n -= 7;
        if (n == 0)
            return "YES";
    }
    return "NO";
}

int main()
{
    long long n;
    cin >> n;
    cout << solve(n);
}