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

int b[10000009];
vector<int> a;

int solve(int n, int k)
{
    int max = a[0];
    for (int i = 1; i < n; i++)
        if (a[i] > max)
            max = a[i];
    for (int i = 0; i <= max; i++)
        b[i] = 0;
    for (int i = 0; i < n; i++)
        b[a[i]]++;
    int ans = 1;
    for (int i = max; i >= 2; i--)
    {
        int count = 0;
        for (int j = 1; j <= max / i; j++)
            count += b[i * j];
        if (count >= n - k)
        {
            ans = i;
            break;
        }
    }
    return ans;
}

int main()
{
    ofstream finput, foutput;

    srand(time(NULL));

    long long n, k, minN = 2;
    for (int TC = 1; TC <= 10; TC++)
    {
        finput.open("../testcase/tc" + toString(TC) + "/input.txt");
        foutput.open("../testcase/tc" + toString(TC) + "/output.txt");
        cout << toString(TC) << endl;

        n = (rand() % 10 + 1);
        while (n < minN)
        {
            n = n * (rand() % 10 + 1);
        }
        k = rand() % n + 1;

        finput << n << " " << k << endl;
        a.resize(n);
        int h = rand() % (minN + 10) + 2;
        for (int i = 0; i < n; i++)
        {
            a[i] = (rand()) % n;
            a[i]++;
            a[i] = (a[i] / h + 1) * h;
        }
        for (int i = 0; i < k; i++)
        {
            while (a[i] % h == 0)
                a[i] = rand() % n;
        }
        for (int i = 0; i < n; i++)
        {
            finput << a[i] << " ";
        }
        finput.close();

        foutput << solve(n, k);
        foutput.close();
        minN *= 10;
        if (minN > 10000)
        {
            minN = 10000;
        }
    }
}