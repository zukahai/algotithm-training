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
vector<int> c(1000009);

void init()
{
    int maxN = 1000009;
    for (int i = 0; i < maxN; i++)
        c[i] = 1;
    c[0] = false;
    c[1] = false;
    for (int i = 2; i * i < maxN; i++)
    {
        if (c[i] == 1)
        {
            for (int j = i * i; j < maxN; j += i)
                c[j] = 0;
        }
    }
    for (int i = 1; i < maxN; i++)
        c[i] += c[i - 1];
}

long long solve(int a, int b)
{
    if (a < 1)
        a = 1;
    if (b < 1)
        b = 1;
    return c[b] - c[a - 1];
}

int main()
{
    ofstream finput, foutput;

    srand(time(NULL));
    init();

    long long t, a, b, k, minN = 2;
    for (int TC = 10; TC <= 10; TC++)
    {
        finput.open("../testcase/tc" + toString(TC) + "/input.txt");
        foutput.open("../testcase/tc" + toString(TC) + "/output.txt");
        cout << toString(TC) << endl;

        t = 100000;

        finput << t << endl;
        for (int i = 0; i < t; i++)
        {
            a = (rand() * rand() - rand() * rand()) % 1000000;
            b = a + (rand() * rand()) % 10000;
            if (rand() % 2 == 0)
            {
                a = -1000000 + (rand() % 100);
            }
            if (rand() % 2 == 0)
            {
                b = 1000000 - (rand() % 100);
            }
            if (a < -1000000)
                a = -1000000;
            if (b > 1000000)
                b = 1000000;
            finput << a << " " << b << endl;
            foutput << solve(a, b) << endl;
        }
        finput.close();
        foutput.close();
        minN *= 10;
        if (minN > 10000)
        {
            minN = 10000;
        }
    }
}