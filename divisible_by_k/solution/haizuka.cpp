#include <bits/stdc++.h>

using namespace std;

int solve(int a, int b, int k)
{
    int min = (a + k - 1) / k;
    int max = b / k;
    return max - min + 1;
}

int main()
{
    int t, a, b, k;
    cin >> t >> k;
    while (t--)
    {
        cin >> a >> b;
        cout << solve(a, b, k) << endl;
    }
}