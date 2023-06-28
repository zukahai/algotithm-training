#include <bits/stdc++.h>

using namespace std;

long long solve(vector<int> a, int k)
{
    int ans = 1;
    int value = 0;
    for (int i = 0; i < a.size(); i++)
    {
        value += a[i];
        if (value > k)
        {
            ans++;
            value = a[i];
        }
    }
    return ans;
}

vector<int> a;
int main()
{
    int n, k;
    cin >> n >> k;
    a.resize(n);

    for (int i = 0; i < a.size(); i++)
    {
        cin >> a[i];
    }
    cout << solve(a, k) << endl;
    return 0;
}