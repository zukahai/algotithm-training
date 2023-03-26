#include <bits/stdc++.h>

using namespace std;

bool b[10000007];

int a[1000009];

void init()
{
    for (int i = 0; i < 10000007; i++)
        b[i] = true;
    b[0] = b[1] = false;
    for (int i = 2; i * i < 10000007; i++)
    {
        if (b[i] == true)
        {
            for (int j = i * i; j < 10000007; j += i)
            {
                b[j] = false;
            }
        }
    }
}

int main()
{
    init();
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        if (a[i] > 0 && b[a[i]] == true)
            cout << a[i] << " ";
}