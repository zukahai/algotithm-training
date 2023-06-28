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
vector<long long> b;
long long solve(vector<int> a)
{
    b.resize(a.size(), 0);
    long long ans = 0;
    b[0] = a[0];
    for (int i = 1; i < a.size(); i++)
    {
        if (b[i - 1] > 0)
        {
            b[i] = b[i - 1] + a[i];
        }
        else
        {
            b[i] = a[i];
        }
    }
    ans = b[0];
    for (int i = 1; i < b.size(); i++)
    {
        ans = max(ans, b[i]);
    }
    return ans;
}
vector<int> a;
int main()
{
    ofstream finput, foutput;

    srand(time(NULL));

    long long n, minN = 2;
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
        for (int i = 0; i < n; i++)
        {
            a[i] = (rand() * rand() - rand() * rand()) % (minN * 1000) + 1;
            if (rand() % 5 == 4 && i > 0)
            {
                a[i] = rand() % minN + 1;
            }
        }
        for (int i = 0; i < n; i++)
        {
            finput << a[i] << " ";
        }
        finput.close();

        foutput << solve(a);
        foutput.close();
        minN *= 10;
        if (minN > 100000)
        {
            minN = 100000;
        }
    }
}