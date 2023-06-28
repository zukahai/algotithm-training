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

long long solve(vector<int> a)
{
    long long ans = 0;
    for (int i = 0; i < a.size(); i++)
        ans += a[i];
    return -ans;
}
vector<int> a;
int main()
{
    ofstream finput, foutput;

    srand(time(NULL));

    long long n, minN = 2;
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

        finput << n << endl;
        a.resize(2 * n);

        for (int i = 0; i < a.size(); i += 2)
        {
            int k = rand() % (minN + 10);
            a[i] = k;
            a[i + 1] = -k;
        }

        for (int i = 0; i < a.size(); i++)
        {
            int index1 = rand() % a.size();
            int index2 = rand() % a.size();
            swap(a[index1], a[index2]);
        }

        a.resize(2 * n - 1);

        for (int i = 0; i < a.size(); i++)
        {
            finput << a[i] << " ";
        }
        finput.close();

        foutput << solve(a);
        foutput.close();
        minN *= 10;
        if (minN > 10000)
        {
            minN = 10000;
        }
    }
}