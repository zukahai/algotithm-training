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

long long x[20];
vector<long long> factorize;

bool isPrime(long long n)
{
    if (n < 2)
        return false;
    for (long long i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

void gen(int i, int n)
{
    for (int j = 0; j <= 9; j++)
    {
        x[i] = x[i - 1] * 10 + j;
        if (isPrime(x[i]))
        {
            if (i == n)
                factorize.push_back(x[i]);
            else
            {
                gen(i + 1, n);
            }
        }
    }
}
int main()
{
    ofstream finput, foutput;

    srand(time(NULL));

    long long n;
    for (int TC = 1; TC <= 10; TC++)
    {
        finput.open("../testcase/tc" + toString(TC) + "/input.txt");
        foutput.open("../testcase/tc" + toString(TC) + "/output.txt");
        cout << toString(TC) << endl;

        n = TC;
        finput << n;
        finput.close();

        factorize.clear();
        gen(1, n);
        for (int i = 0; i < factorize.size(); i++)
        {
            foutput << factorize[i] << " ";
        }
        if (factorize.size() == 0)
        {
            foutput << "-1";
        }
        foutput.close();
    }
}