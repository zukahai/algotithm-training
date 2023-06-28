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

long long solve(vector<int> a, int k)
{
    int ans = 1;
    int value = 0;
    for (int i = 0; i < a.size(); i++)
    {
        value += a[i];
        if (value > k)
        {
            ans++;
            value = a[i];
        }
    }
    return ans;
}
vector<int> a;
int main()
{
    ofstream finput, foutput;

    srand(time(NULL));

    long long n, k, minN = 2;
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

        k = (rand() % 10 + 1);
        while (k < minN)
        {
            k = k * (rand() % 10 + 1);
        }

        finput << n << " " << k << endl;
        a.resize(n);

        for (int i = 0; i < a.size(); i++)
        {
            a[i] = (rand() % k) + 1;
        }

        for (int i = 0; i < a.size(); i++)
        {
            finput << a[i] << " ";
        }
        finput.close();

        foutput << solve(a, k);
        foutput.close();
        minN *= 10;
        if (minN > 10000)
        {
            minN = 10000;
        }
    }
}