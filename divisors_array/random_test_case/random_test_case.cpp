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

int gcd(int a, int b)
{
    int d = a % b;
    while (d != 0)
    {
        a = b;
        b = d;
        d = a % b;
    }
    return b;
}

int solve(vector<int> a)
{
    int ans = a[0];
    for (int i = 1; i < a.size(); i++)
    {
        ans = gcd(ans, a[i]);
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
        cout << "N = " << n << endl;
        int k = rand() % (minN + 10) + 2;
        cout << "K = " << k << endl;
        for (int i = 0; i < n; i++)
        {
            a[i] = (rand()) % n;
            a[i]++;
            a[i] *= k;
        }
        for (int i = 0; i < n; i++)
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