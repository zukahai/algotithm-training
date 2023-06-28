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

int count(int h1, int m1, int h2, int m2)
{
    if (h2 < h1 || (h2 == h1 && m2 < m1))
    {
        h2 += 24;
    }
    int ans = 0;
    if (m1 <= m2)
    {
        ans += (m2 - m1);
    }
    else
    {
        m1 += 60;
        ans += (m2 - m1);
        h1--;
    }
    ans += (h2 - h1) * 60;
    return ans;
}

int main()
{
    int n, t, h1, m1, h2, m2;
    cin >> n;
    int ans = 0;
    for (int i = 0; i < n / 2; i++)
    {
        cin >> t >> h1 >> m1;
        cin >> t >> h2 >> m2;
        ans += count(h1, m1, h2, m2);
    }
    cout << ans << endl;
}