#include <bits/stdc++.h>

using namespace std;

vector<long long> b;

long long solve(vector<int> a)
{
    b.resize(a.size(), 0);
    int ans = 0;

    b[0] = a[0];
    b[1] = b[0] + a[1];
    for (int i = 2; i < a.size(); i++)
    {
        b[i] = (b[i - 1] > b[i - 2]) ? b[i - 1] + a[i] : b[i - 2] + a[i];
    }
    // display b
    // for (int i = 0; i < b.size(); i++)
    // {
    //     cout << b[i] << " ";
    // }
    // cout << endl;
    return b[a.size() - 1];
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long ans = solve(a);
    cout << ans << endl;
    return 0;
}