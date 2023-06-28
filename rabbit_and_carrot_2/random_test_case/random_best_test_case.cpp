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
vector<int> b;

long long solve(vector<int> a, int k)
{
    b.resize(a.size(), 0);
    int ans = 0;

    b[0] = a[0];
    for (int i = 1; i < a.size(); i++)
    {
        b[i] = b[i - 1] + a[i];
        for (int j = max(0, i - k); j < i; j++)
            if (b[j] + a[i] > b[i])
                b[i] = b[j] + a[i];
    }
    // display b
    // for (int i = 0; i < b.size(); i++)
    // {
    //     cout << b[i] << " ";
    // }
    // cout << endl;
    return b[a.size() - 1];
}

vector<int> a;
int main()
{
    ofstream finput, foutput;

    srand(time(NULL));

    long long n, k, minN = 2;
    for (int TC = 9; TC <= 10; TC++)
    {
        finput.open("../testcase/tc" + toString(TC) + "/input.txt");
        foutput.open("../testcase/tc" + toString(TC) + "/output.txt");
        cout << toString(TC) << endl;

        n = 10000;
        k = 10000;
        if (TC == 10)
        {
            k = 1;
        }

        finput << n << " " << k << endl;
        a.resize(n);
        for (int i = 0; i < n; i++)
        {
            a[i] = -(i + 1);
        }
        for (int i = 0; i < n; i++)
        {
            finput << a[i] << " ";
        }
        finput.close();

        int ans = solve(a, k);

        foutput << ans;
        foutput.close();
    }
}