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

bool b[109][109][109];

int solve(vector<vector<int>> a)
{
    int m = a.size();
    int n = a[0].size();
    for (int col = 0; col < n; col++)
        for (int i = 0; i < m; i++)
            for (int j = i; j < m; j++)
                b[col][i][j] = 0;
    for (int col = 0; col < n; col++)
        for (int row = 0; row < m; row++)
            b[col][row][row] = a[row][col];
    for (int col = 0; col < n; col++)
        for (int i = 0; i < m - 1; i++)
            for (int j = i + 1; j < m; j++)
                if (a[j][col] > 0 && b[col][i][j - 1])
                    b[col][i][j] = true;
    int ans = 0;
    for (int i = 0; i < m; i++)
        for (int j = i; j < m; j++)
        {
            int count = 0;
            for (int k = 0; k < n; k++)
                count += b[k][i][j];
            ans = max(ans, count * (j - i + 1));
        }

    // for (int col = 0; col < n; col++)
    // {
    //     cout << "Col: " << col << endl;
    //     for (int i = 0; i < m; i++)
    //     {
    //         for (int j = i; j < m; j++)
    //         {
    //             cout << "b[" << col << "][" << i << "][" << j << "]: " << b[col][i][j] << endl;
    //         }
    //     }
    // }
    return ans;
}
vector<vector<int>> a;
int main()
{
    ofstream finput, foutput;

    srand(time(NULL));

    long long n, m, minN = 2;
    for (int TC = 14; TC <= 15; TC++)
    {
        finput.open("../testcase/tc" + toString(TC) + "/input.txt");
        foutput.open("../testcase/tc" + toString(TC) + "/output.txt");
        cout << toString(TC) << endl;

        n = m = 100;
        int k = TC % 2;

        vector<vector<int>> a;
        for (int i = 0; i < m; i++)
        {
            vector<int> t(n);
            for (int j = 0; j < n; j++)
                t[j] = k;
            a.push_back(t);
        }

        finput << m << " " << n << endl;

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
                finput << a[i][j] << " ";
            finput << endl;
        }

        finput.close();

        foutput << solve(a);
        foutput.close();
        minN = (TC + 1) * 7;
        if (minN > 100)
        {
            minN = 100;
        }
    }
}