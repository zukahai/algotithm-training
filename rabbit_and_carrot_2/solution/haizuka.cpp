#include <bits/stdc++.h>

using namespace std;

vector<long long> b;

long long solve(vector<int> a, int k)
{
    b.resize(a.size(), 0);
    int ans = 0;

    b[0] = a[0];
    for (int i = 1; i < a.size(); i++)
    {
        b[i] = b[i - 1] + a[i];
        for (int j = max(0, i - k); j < i; j++)
            if (b[j] + a[i] > b[i])
                b[i] = b[j] + a[i];
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
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long ans = solve(a, k);
    cout << ans << endl;
    return 0;
}