#include <bits/stdc++.h>

using namespace std;

vector<long long> b;

long long solve(vector<vector<int>> a)
{
    b = vector<long long>(10000009, 0);
    int max = 0;
    for (int i = 0; i < a.size(); i++)
    {
        b[a[i][0]]++;
        b[a[i][1] + 1]--;
        max = max < a[i][1] ? a[i][1] : max;
    }
    long long ans = 0;
    long long temp = 0;
    for (int i = 0; i <= max; i++)
    {
        temp += b[i];
        ans = (ans < temp) ? temp : ans;
    }
    return ans;
}
vector<vector<int>> a;
int main()
{
    long long n;
    cin >> n;
    a.resize(n);
    for (int i = 0; i < a.size(); i++)
    {
        a[i].resize(2);
        cin >> a[i][0] >> a[i][1];
    }
    cout << solve(a) << endl;
}