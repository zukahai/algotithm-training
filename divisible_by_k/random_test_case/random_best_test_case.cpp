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

int solve(int a, int b, int k)
{
    int min = (a + k - 1) / k;
    int max = b / k;
    return max - min + 1;
}
int main()
{
    ofstream finput, foutput;

    srand(time(NULL));

    long long n;
    long long maxN = 1;
    int t, a, b, k;
    for (int TC = 14; TC <= 15; TC++)
    {
        string s = "";
        finput.open("../testcase/tc" + toString(TC) + "/input.txt");
        foutput.open("../testcase/tc" + toString(TC) + "/output.txt");
        cout << toString(TC) << endl;

        t = 10000;
        k = (TC == 14) ? 1 : 1000000000;

        finput << t << " " << k << endl;
        while (t--)
        {
            a = rand() % n + 1;
            b = a + rand();
            finput << a << " " << b << endl;
            foutput << solve(a, b, k) << endl;
        }

        foutput.close();
        finput.close();
    }
}