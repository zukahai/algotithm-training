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

string toString2(int n)
{
    string ans = "";
    while (n > 0)
    {
        ans = char(n % 10 + '0') + ans;
        n /= 10;
    }
    return ans;
}

string decToBin(long long n)
{
    string ans = "";
    while (n > 0)
    {
        ans = char(n % 2 + '0') + ans;
        n /= 2;
    }
    return ans;
}

string solve(long long n)
{
    string bin = decToBin(n);
    string ans = "";
    int count_one = 0;
    for (int i = 0; i < bin.size(); i++)
    {
        count_one += bin[i] == '1';
    }
    ans += (toString2(bin.length()) + " " + toString2(count_one));
    ans += "\n";
    for (int i = 0; i < bin.size(); i++)
    {
        if (bin[i] == '1')
        {
            ans += toString2(i + 1) + " ";
        }
    }
    return ans;
}
int main()
{
    ofstream finput, foutput;

    srand(time(NULL));

    long long n, minN = 3;
    for (int TC = 13; TC <= 14; TC++)
    {
        finput.open("../testcase/tc" + toString(TC) + "/input.txt");
        foutput.open("../testcase/tc" + toString(TC) + "/output.txt");
        cout << toString(TC) << endl;

        if (TC == 13)
        {
            n = 1;
            while (n < 100000000000000000)
            {
                n *= 2;
            }
        }
        else
        {
            n = 1;
            while (n < 100000000000000000)
            {
                n *= 2;
                n++;
            }
        }

        finput << n << endl;
        finput.close();

        foutput << solve(n);
        foutput.close();
        minN *= 12;
        if (minN > 100000000000000000)
        {
            minN = 100000000000000000;
        }
    }
}