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
vector<int> b;
vector<int> c;
vector<int> solve(vector<int> a)
{
    b.resize(a.size(), 0);
    c.resize(a.size(), 0);
    vector<int> ans;

    b[0] = (a[0] % 2 == 0) ? 1 : 0;
    c[0] = 1 - b[0];
    for (int i = 1; i < a.size(); i++)
    {
        if (a[i] % 2 == 0)
        {
            b[i] = b[i - 1] + 1;
            c[i] = 0;
        }
        else
        {
            c[i] = c[i - 1] + 1;
            b[i] = 0;
        }
    }
    int max = 1, index = 0;
    for (int i = 0; i < b.size(); i++)
    {
        if ((b[i] > max) || (b[i] == max && index > i))
        {
            max = b[i];
            index = i;
        }
    }

    for (int i = 0; i < c.size(); i++)
        if ((c[i] > max) || (c[i] == max && index > i))
        {
            max = c[i];
            index = i;
        }

    for (int i = index - max + 1; i <= index; i++)
    {
        ans.push_back(a[i]);
    }
    return ans;
}
vector<int> a;
int main()
{
    ofstream finput, foutput;

    srand(time(NULL));

    long long n, minN = 2;
    for (int TC = 10; TC <= 10; TC++)
    {
        finput.open("../testcase/tc" + toString(TC) + "/input.txt");
        foutput.open("../testcase/tc" + toString(TC) + "/output.txt");
        cout << toString(TC) << endl;

        n = 100000;

        finput << n << endl;
        a.resize(n);
        for (int i = 0; i < n; i++)
        {
            a[i] = 2 * i;
        }
        for (int i = 0; i < n; i++)
        {
            finput << a[i] << " ";
        }
        finput.close();

        vector<int> ans = solve(a);
        for (int i = 0; i < ans.size(); i++)
            foutput << ans[i] << " ";
        foutput.close();
        minN *= 10;
        if (minN > 100000)
        {
            minN = 100000;
        }
    }
}