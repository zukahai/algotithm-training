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

long long solve(vector<int> a, int s)
{
    map<long long, int> mp;
    long long ans = 0;
    mp[0] = 1;
    long long temp = 0;
    for (int i = 0; i < a.size(); i++)
    {
        temp += a[i];
        ans += mp[temp - s];
        mp[temp]++;
    }
    return ans;
}
vector<int> a;
int main()
{
    ofstream finput, foutput;

    srand(time(NULL));

    long long n, s, minN = 2;
    for (int TC = 8; TC <= 9; TC++)
    {
        finput.open("../testcase/tc" + toString(TC) + "/input.txt");
        foutput.open("../testcase/tc" + toString(TC) + "/output.txt");
        cout << toString(TC) << endl;
        n = 1000000;
        long long d = 0;

        if (TC == 9)
        {
            s = 0;
        }
        else
        {
            s = 2;
            d = 1;
        }

        finput << n << " " << s << endl;
        a.resize(n);
        for (int i = 0; i < n; i++)
        {
            a[i] = d;
        }
        for (int i = 0; i < n; i++)
        {
            finput << a[i] << " ";
        }
        finput.close();

        foutput << solve(a, s);
        foutput.close();
        minN *= 10;
        if (minN > 100000)
        {
            minN = 100000;
        }
    }
}