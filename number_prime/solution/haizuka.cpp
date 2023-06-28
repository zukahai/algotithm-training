#include <bits/stdc++.h>

using namespace std;

vector<int> c(1000009);

void init()
{
    int maxN = 1000009;
    for (int i = 0; i < maxN; i++)
        c[i] = 1;
    c[0] = false;
    c[1] = false;
    for (int i = 2; i * i < maxN; i++)
    {
        if (c[i] == 1)
        {
            for (int j = i * i; j < maxN; j += i)
                c[j] = 0;
        }
    }
    for (int i = 1; i < maxN; i++)
        c[i] += c[i - 1];
}

long long solve(int a, int b)
{
    if (a < 1)
        a = 1;
    if (b < 1)
        b = 1;
    return c[b] - c[a - 1];
}

int main()
{
    init();
    int t, a, b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        cout << solve(a, b) << endl;
    }
}