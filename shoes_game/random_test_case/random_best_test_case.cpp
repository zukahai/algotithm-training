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

long long solve(vector<int> a)
{
    long long ans = 0;
    for (int i = 0; i < a.size(); i++)
        ans += a[i];
    return -ans;
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
        a.resize(2 * n);

        for (int i = 0; i < a.size() / 2; i++)
        {
            int k = 1000000000 - i;
            a[i] = k;
            a[a.size() / 2 + i] = -k;
        }

        a.resize(2 * n - 1);

        for (int i = 0; i < a.size(); i++)
        {
            finput << a[i] << " ";
        }
        finput.close();

        foutput << solve(a);
        foutput.close();
        minN *= 10;
        if (minN > 10000)
        {
            minN = 10000;
        }
    }
}