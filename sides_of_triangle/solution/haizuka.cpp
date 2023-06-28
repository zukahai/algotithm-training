#include <bits/stdc++.h>

using namespace std;

string solve(int a, int b, int c)
{
    return (a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && b + c > a) ? "YES" : "NO";
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << solve(a, b, c);
}