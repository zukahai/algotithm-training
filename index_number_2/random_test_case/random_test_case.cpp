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

int solve(vector<int> a, int x)
{
    int ans = -1;
    int l = 0;
    int r = a.size() - 1;
    while (l < r)
    {
        int m = (l + r) / 2;
        if (a[m] >= x)
        {
            r = m;
        }
        else
        {
            l = m + 1;
        }
    }
    return (a[l] == x) ? l : -1;
}
vector<int> a;
int main()
{
    ofstream finput, foutput;

    srand(time(NULL));

    long long n, minN = 2;
    int x;
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

        finput << n << endl;
        a.resize(n);
        a[0] = (rand() * rand() - rand() * rand()) % minN + 1;
        for (int i = 1; i < n; i++)
        {
            a[i] = a[i - 1] + rand() % 10;
            if (rand() % 3 < 2)
                a[i] = a[i - 1];
        }
        for (int i = 0; i < n; i++)
        {
            finput << a[i] << " ";
        }
        x = a[rand() * rand() % n] + (rand()) % 2;
        finput << endl
               << x;

        finput.close();

        foutput << solve(a, x);
        foutput.close();
        minN *= 10;
        if (minN > 100000)
        {
            minN = 100000;
        }
    }
}