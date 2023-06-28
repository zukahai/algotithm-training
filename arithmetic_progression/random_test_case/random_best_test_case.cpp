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
    if (a.size() == 1)
        return 1;
    vector<int> b(a.size(), 0);
    b[0] = 1;
    b[1] = 2;
    for (int i = 2; i < a.size(); i++)
    {
        if (a[i] - a[i - 1] == a[i - 1] - a[i - 2])
        {
            b[i] = b[i - 1] + 1;
        }
        else
        {
            b[i] = 2;
        }
    }
    int ans = b[0];
    for (int i = 0; i < a.size(); i++)
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
    int n;
    int maxN = 10;
    for (int TC = 10; TC <= 10; TC++)
    {
        finput.open("../testcase/tc" + toString(TC) + "/input.txt");
        foutput.open("../testcase/tc" + toString(TC) + "/output.txt");
        cout << toString(TC) << endl;
        n = 100000;
        a.resize(n);
        for (int i = 0; i < n; i++)
        {
            a[i] = 10000000;
        }
        finput << n << endl;
        for (int i = 0; i < n; i++)
        {
            finput << a[i] << " ";
        }
        finput.close();
        foutput << solve(a);
        foutput.close();
        maxN *= 10;
        if (maxN > 100000)
        {
            maxN = 100000;
        }
    }
}