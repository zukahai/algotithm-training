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

long long solve(long long a, long long b, long long h)
{
    long long dis = a - b;
    if (h <= a)
        return 1;
    return 1 + ((h - a + dis - 1) / dis);
}
int main()
{
    ofstream finput, foutput;

    srand(time(NULL));

    long long a, b, h, minN = 2;
    for (int TC = 1; TC <= 10; TC++)
    {
        finput.open("../testcase/tc" + toString(TC) + "/input.txt");
        foutput.open("../testcase/tc" + toString(TC) + "/output.txt");
        cout << toString(TC) << endl;

        h = (rand() % 10 + 1);
        while (h < minN)
        {
            h = h * (rand() % 10 + 1);
        }

        a = (rand() % h) + 1;
        b = (rand() % a) + 1;
        finput << a << " " << b << endl;
        finput << h;
        finput.close();

        foutput << solve(a, b, h);
        foutput.close();
        minN *= 10;
        if (minN > 10000000000000000)
        {
            minN = 10000000000000000;
        }
    }
}