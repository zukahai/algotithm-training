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

int solve(vector<long long> a, int d)
{
    if (a.size() == 1)
        return 1;
    vector<int> b(a.size(), 1);
    for (int i = 1; i < a.size(); i++)
    {
        for (int j = 0; j < i; j++)
            if (a[i] - a[j] == d && b[j] + 1 > b[i])
                b[i] = b[j] + 1;
    }
    int ans = b[0];
    for (int i = 0; i < a.size(); i++)
    {
        ans = max(ans, b[i]);
    }
    return ans;
}
vector<long long> a;
int main()
{
    ofstream finput, foutput;

    srand(time(NULL));
    int n, d;
    int maxN = 10;
    for (int TC = 14; TC <= 14; TC++)
    {
        finput.open("../testcase/tc" + toString(TC) + "/input.txt");
        foutput.open("../testcase/tc" + toString(TC) + "/output.txt");
        cout << toString(TC) << endl;
        n = 10000;
        d = 10;
        a.resize(n);
        a[0] = 0;
        a[1] = 1;
        for (int i = 2; i < n; i++)
        {
            a[i] = a[i - 2] + d;
        }
        finput << n << " " << d << endl;
        for (int i = 0; i < n; i++)
        {
            finput << a[i] << " ";
        }
        finput.close();
        foutput << solve(a, d);
        foutput.close();
        maxN *= 10;
        if (maxN > 10000)
        {
            maxN = 10000;
        }
    }
}