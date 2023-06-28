#include <bits/stdc++.h>

using namespace std;

long long solve(vector<int> a)
{
    long long ans = 0;
    for (int i = 0; i < a.size(); i++)
        ans += a[i];
    return -ans;
}

vector<int> a;
int main()
{
    int n;
    cin >> n;
    a.resize(2 * n - 1);

    for (int i = 0; i < a.size(); i++)
    {
        cin >> a[i];
    }
    cout << solve(a) << endl;
    return 0;
}