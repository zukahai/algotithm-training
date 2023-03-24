#include <bits/stdc++.h>

using namespace std;

string toString(int n)
{
    string ans = "";
    while (n > 0)
    {
        ans = char(n % 10 + '0') + ans;
        n /= 10;
    }
    if (ans.length() == 1)
    {
        ans = "0" + ans;
    }
    return ans;
}

int a[10000007];
int b[20000007];

int solve(int n)
{
    for (int i = 0; i < 20000007; i++)
    {
        b[i] = 0;
    }
    int min = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        a[i] -= min;
    }

    for (int i = 0; i < n; i++)
        b[a[i]]++;
    cout << endl;
    int indexMax = 0;
    for (int i = 0; i < 20000007; i++)
    {
        if (b[i] >= b[indexMax])
        {
            indexMax = i;
        }
    }
    return indexMax + min;
}

int main()
{
    ofstream finput, foutput;

    srand(time(NULL));

    int n;
    int maxN = 10;
    for (int TC = 1; TC <= 10; TC++)
    {
        finput.open("../testcase/tc" + toString(TC) + "/input.txt");
        foutput.open("../testcase/tc" + toString(TC) + "/output.txt");
        cout << toString(TC) << endl;

        int n = rand() * rand() % maxN + 5;
        cout << "N = " << n << endl;
        for (int i = 0; i < n; i++)
        {
            a[i] = (rand() - rand()) % (maxN + 5);
            if (rand() % 3 == 0 && i != 0)
            {
                a[i] = a[(rand() * rand()) % i];
            }
        }
        finput << n << endl;
        for (int i = 0; i < n; i++)
            finput << a[i] << " ";

        finput.close();
        foutput << solve(n);
        foutput.close();

        maxN *= 10;
        if (maxN > 1000000)
        {
            maxN = 1000000;
        }
    }
}