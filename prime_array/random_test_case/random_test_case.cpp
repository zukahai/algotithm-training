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

bool b[10000007];

int a[100009];

void init()
{
    for (int i = 0; i < 10000007; i++)
        b[i] = true;
    b[0] = b[1] = false;
    for (int i = 2; i * i < 10000007; i++)
    {
        if (b[i] == true)
        {
            for (int j = i * i; j < 10000007; j += i)
            {
                b[j] = false;
            }
        }
    }
}

int main()
{
    ofstream finput, foutput;

    srand(time(NULL));
    init();
    int n;
    int maxN = 10;
    for (int TC = 1; TC <= 10; TC++)
    {
        finput.open("../testcase/tc" + toString(TC) + "/input.txt");
        foutput.open("../testcase/tc" + toString(TC) + "/output.txt");
        cout << toString(TC) << endl;
        n = rand() % maxN + 1;
        for (int i = 0; i < n; i++)
        {
            a[i] = rand() % maxN + 1;
        }
        finput << n << endl;
        for (int i = 0; i < n; i++)
        {
            finput << a[i] << " ";
        }
        finput.close();

        for (int i = 0; i < n; i++)
        {
            if (a[i] > 0 && b[a[i]])
            {
                foutput << a[i] << " ";
            }
        }
        foutput.close();
        maxN *= 10;
        if (maxN > 100000)
        {
            maxN = 100000;
        }
    }
}