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
    for (int TC = 1; TC <= 15; TC++)
    {
        finput.open("../testcase/tc" + toString(TC) + "/input.txt");
        foutput.open("../testcase/tc" + toString(TC) + "/output.txt");
        cout << toString(TC) << endl;
        n = (TC * rand()) % maxN + 1;
        d = (TC * rand()) % maxN + 1;
        a.resize(n);
        for (int i = 0; i < n; i++)
        {
            a[i] = rand() % maxN + 1;
            if (rand() % 2 == 0 && i > 1)
            {
                int index = rand() % i;
                a[i] = a[index] + d;
            }
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
        if (maxN > 1000)
        {
            maxN = 1000;
        }
    }
}