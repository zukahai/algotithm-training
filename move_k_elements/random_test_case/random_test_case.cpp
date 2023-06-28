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

string solve(string s, int k)
{
    int number = s.length() - k;
    int start = 0;
    string ans = "";
    for (int i = 0; i < number; i++)
    {
        int indexMax = start;
        for (int j = start + 1; j <= s.length() - number + i; j++)
        {
            if (s[j] > s[indexMax])
            {
                indexMax = j;
            }
        }
        ans += s[indexMax];
        start = indexMax + 1;
    }
    return ans;
}

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
        k = (rand() % (n - 1) + 1);
        string s = "";
        for (int i = 0; i < n; i++)
        {
            s = s + char(rand() % 10 + '0');
        }
        finput << s << " " << k << endl;
        finput.close();

        foutput << solve(s, k);
        foutput.close();
        minN *= 10;
        if (minN > 10000)
        {
            minN = 10000;
        }
    }
}