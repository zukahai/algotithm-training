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

long long solve(vector<vector<int>> a)
{
    b = vector<long long>(10000009, 0);
    int max = 0;
    for (int i = 0; i < a.size(); i++)
    {
        b[a[i][0]]++;
        b[a[i][1] + 1]--;
        max = max < a[i][1] ? a[i][1] : max;
    }
    long long ans = 0;
    long long temp = 0;
    for (int i = 0; i <= max; i++)
    {
        temp += b[i];
        ans = (ans < temp) ? temp : ans;
    }
    return ans;
}
vector<vector<int>> a;

int main()
{
    ofstream finput, foutput;

    srand(time(NULL));

    long long n, minN = 2;
    for (int TC = 14; TC <= 15; TC++)
    {
        finput.open("../testcase/tc" + toString(TC) + "/input.txt");
        foutput.open("../testcase/tc" + toString(TC) + "/output.txt");
        cout << toString(TC) << endl;

        n = 50000;
        a = vector<vector<int>>(n);
        for (int i = 0; i < n; i++)
        {
            a[i].resize(2);
            a[i][0] = rand() % n;
            a[i][1] = 10000000 - rand() % n;
            if (TC == 15)
            {
                a[i][0] = 2 * i;
                a[i][1] = 2 * i + 1;
            }
        }

        finput << n << endl;
        for (int i = 0; i < n; i++)
            finput << a[i][0] << " " << a[i][1] << endl;
        finput.close();

        foutput << solve(a);
        foutput.close();
        minN *= 5;
        if (minN > 10000)
        {
            minN = 10000;
        }
    }
}