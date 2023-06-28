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

string solve(vector<int> a)
{
    sort(a.begin(), a.end());
    if (a[0] + a[3] == a[1] + a[2])
        return "YES";
    if (a[0] + a[1] + a[2] == a[3])
        return "YES";
    return "NO";
}

int main()
{
    vector<int> a(4);
    for (int i = 0; i < 4; i++)
    {
        cin >> a[i];
    }
    cout << solve(a);
}