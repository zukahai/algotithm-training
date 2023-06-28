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

string solve(int a, int b, int c)
{
    return (a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && b + c > a) ? "YES" : "NO";
}

int main()
{
    ofstream finput, foutput;

    srand(time(NULL));

    long long a, b, c, minN = 3;
    for (int TC = 1; TC <= 15; TC++)
    {
        finput.open("../testcase/tc" + toString(TC) + "/input.txt");
        foutput.open("../testcase/tc" + toString(TC) + "/output.txt");
        cout << toString(TC) << endl;

        a = rand() % 10;
        while (a < minN)
        {
            a = a * 10 + rand() % 10;
        }
        b = rand() % 10;
        while (b < minN)
        {
            b = b * 10 + rand() % 10;
        }
        c = rand() % 10;
        while (c < minN)
        {
            c = c * 10 + rand() % 10;
        }

        finput << a << " " << b << " " << c << endl;
        finput.close();

        foutput << solve(a, b, c);
        foutput.close();
        minN *= 9;
        if (minN > 100000000)
        {
            minN = 100000000;
        }
    }
}