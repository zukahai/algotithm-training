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

long long solve(long long n)
{
    long long index = 2;
    long long ans = 1;
    long long N = n;
    while (index * index <= N && n > 1)
    {
        int count = 0;
        while (n % index == 0)
        {
            n /= index;
            count++;
        }
        if (count % 2 == 1)
        {
            ans *= index;
        }
        index++;
    }
    ans *= n;
    return ans;
}
int main()
{
    ofstream finput, foutput;

    srand(time(NULL));

    long long n;
    long long maxN = 10;
    for (int TC = 1; TC <= 15; TC++)
    {
        finput.open("../testcase/tc" + toString(TC) + "/input.txt");
        foutput.open("../testcase/tc" + toString(TC) + "/output.txt");
        cout << toString(TC) << endl;

        n = rand() * rand() % maxN + 1;
        while (n < maxN)
        {
            n = n * 10 + (rand() % 10) + 1;
        }
        finput << n;
        finput.close();

        foutput << solve(n);
        foutput.close();
        maxN *= 10;
        if (maxN > 10000000000000)
        {
            maxN = 10000000000000;
        }
    }
}