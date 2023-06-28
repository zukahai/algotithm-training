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

long long solve(long long n)
{
    if (n == 0)
        return 0;
    vector<int> a;
    while (n > 0)
    {
        a.push_back(n % 10);
        n /= 10;
    }
    sort(a.begin(), a.end());
    long long min = 0;
    long long max = 0;
    long long k = 1;
    for (int i = 0; i < a.size(); i++)
    {
        min = min * 10 + a[i];
        max = a[i] * k + max;
        k *= 10;
    }
    return max - min;
}

int main()
{
    ofstream finput, foutput;

    srand(time(NULL));

    long long n, minN = 2;
    for (int TC = 1; TC <= 15; TC++)
    {
        finput.open("../testcase/tc" + toString(TC) + "/input.txt");
        foutput.open("../testcase/tc" + toString(TC) + "/output.txt");
        cout << toString(TC) << endl;

        n = rand() % 10;
        ;
        while (n < minN)
        {
            n = n * 10 + rand() % 10;
        }

        finput << n << endl;
        finput.close();

        foutput << solve(n);
        foutput.close();
        minN *= 15;
        if (minN > 10000000000000000)
        {
            minN = 10000000000000000;
        }
    }
}