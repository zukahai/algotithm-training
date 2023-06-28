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
vector<long long> b;
long long solve(vector<int> a)
{
    b.resize(a.size(), 0);
    long long ans = 0;

    b[0] = a[0];
    b[1] = b[0] + a[1];
    for (int i = 2; i < a.size(); i++)
    {
        b[i] = (b[i - 1] > b[i - 2]) ? b[i - 1] + a[i] : b[i - 2] + a[i];
    }
    return b[a.size() - 1];
}

vector<int> a;
int main()
{
    ofstream finput, foutput;

    srand(time(NULL));

    long long n, minN = 2;
    for (int TC = 10; TC <= 10; TC++)
    {
        finput.open("../testcase/tc" + toString(TC) + "/input.txt");
        foutput.open("../testcase/tc" + toString(TC) + "/output.txt");
        cout << toString(TC) << endl;

        n = 100000;

        finput << n << endl;
        a.resize(n);
        for (int i = 0; i < n; i++)
        {
            a[i] = -i;
        }
        for (int i = 0; i < n; i++)
        {
            finput << a[i] << " ";
        }
        finput.close();

        long long ans = solve(a);

        foutput << ans;
        foutput.close();
    }
}