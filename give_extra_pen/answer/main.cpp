#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    long long a, b;
    cin >> n >> a >> b;
    long long k;
    if ((n % (a + b)) == 0)
    {
        k = (n / (a + b)) * a;
    }
    else
    {
        if (n % (a + b) < a)
        {
            k = (n / (a + b)) * a + (n % (a + b));
        }
        else
        {
            k = (n / (a + b)) * a + a;
        }
    }
    cout << k;
}
