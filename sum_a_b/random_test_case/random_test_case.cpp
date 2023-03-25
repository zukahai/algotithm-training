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

long long sum(long long n)
{
    return n * (n + 1) / 2;
}

int main()
{
    ofstream finput, foutput;

    srand(time(NULL));

    long long a, b;
    int maxN = 10;
    for (int TC = 1; TC <= 10; TC++)
    {
        finput.open("../testcase/tc" + toString(TC) + "/input.txt");
        foutput.open("../testcase/tc" + toString(TC) + "/output.txt");
        cout << toString(TC) << endl;

        a = rand() * rand() % maxN + 1;
        b = a + rand() * rand() % maxN + 1;

        finput << a << " " << b;

        finput.close();

        foutput << sum(b) - sum(a - 1) << endl;
        foutput.close();
        maxN *= 10;
        if (maxN > 1000000000)
        {
            maxN = 1000000000;
        }
    }
}