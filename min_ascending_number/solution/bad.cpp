#include <bits/stdc++.h>

using namespace std;
string solve(string s)
{
    string ans = "YES";
    if (s[0] == '-')
        return "NO";
    for (int i = 1; i < s.size(); i++)
        if (s[i] >= s[i - 1])
            return "NO";
    return "YES";
}

string toString(long long n)
{
    string s = "";
    while (n)
    {
        s = char((n % 10) + '0') + s;
        n /= 10;
    }
    return s;
}

int main()
{
    long long n;
    cin >> n;
    while (solve(toString(n)) != "YES")
        n++;
    cout << n << endl;
}