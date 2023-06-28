#include <bits/stdc++.h>

using namespace std;

string solve(long long n)
{
    if (n == 0)
        return "10";
    string ans = "";
    for (int i = 9; i >= 2; i--)
    {
        while (n % i == 0)
        {
            n /= i;
            ans = char(i + '0') + ans;
        }
    }
    if (n > 1)
        return "-1";
    return ans;
}

int main()
{
    long long n;
    cin >> n;
    cout << solve(n) << endl;
}