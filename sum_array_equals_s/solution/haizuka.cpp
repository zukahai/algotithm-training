#include <bits/stdc++.h>

using namespace std;

long long solve(vector<int> a, int s)
{
    map<long long, int> mp;
    long long ans = 0;
    mp[0] = 1;
    long long temp = 0;
    for (int i = 0; i < a.size(); i++)
    {
        temp += a[i];
        ans += mp[temp - s];
        mp[temp]++;
    }
    return ans;
}

int main()
{
    vector<int> a;
    int n, s;
    cin >> n >> s;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    cout << solve(a, s) << endl;
}