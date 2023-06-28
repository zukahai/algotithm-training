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

int count(int h1, int m1, int h2, int m2)
{
    if (h2 < h1 || (h2 == h1 && m2 < m1))
    {
        h2 += 24;
    }
    int ans = 0;
    if (m1 <= m2)
    {
        ans += (m2 - m1);
    }
    else
    {
        m1 += 60;
        ans += (m2 - m1);
        h1--;
    }
    ans += (h2 - h1) * 60;
    return ans;
}
int main()
{
    ofstream finput, foutput;

    srand(time(NULL));

    long long n, minN = 3;
    int h1, m1, h2, m2;
    for (int TC = 1; TC <= 15; TC++)
    {
        finput.open("../testcase/tc" + toString(TC) + "/input.txt");
        foutput.open("../testcase/tc" + toString(TC) + "/output.txt");
        cout << toString(TC) << endl;
        long long ans = 0;
        n = rand() % 10;
        while (n < minN)
        {
            n = n * 10 + rand() % 10;
        }
        n *= 2;
        h1 = m1 = h2 = m2 = 0;

        finput << n << endl;
        for (int i = 0; i < n / 2; i++)
        {
            int k = rand() % 100;
            h1 = h2 + k / 60;
            m1 = m2 + k % 60;
            if (m1 > 59)
            {
                h1 += (m1 / 60);
                m1 %= 60;
            }

            if (h1 > 23)
                h1 %= 24;

            k = rand() % 100;
            h2 = h1 + k / 60;
            m2 = m1 + k % 60;
            if (m2 > 59)
            {
                h2 += (m2 / 60);
                m2 %= 60;
            }
            if (h2 > 23)
                h2 %= 24;
            ans += count(h1, m1, h2, m2);
            finput << "1 " << h1 << " " << m1 << endl;
            finput << "2 " << h2 << " " << m2 << endl;
        }
        finput.close();

        foutput << ans;
        foutput.close();
        minN *= 2;
        if (minN > 1000)
        {
            minN = 1000;
        }
    }
}