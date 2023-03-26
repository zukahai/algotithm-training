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

int solve(vector<int> a)
{
    vector<int> b(a.size(), 0);
    int ans = 0;
    b[0] = 1;
    for (int i = 1; i < a.size(); i++)
    {
        if (a[i] == a[i - 1])
        {
            b[i] = b[i - 1] + 1;
        }
        else
        {
            b[i] = 1;
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
            a[i] = (rand() * rand() - rand() * rand()) % minN + 1;
            if (rand() % 5 < 4 && i > 0)
            {
                a[i] = a[i - 1];
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