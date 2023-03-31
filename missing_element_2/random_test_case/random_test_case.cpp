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

vector<int> solve(vector<int> a, int n)
{
    vector<int> b(n + 1, 0);
    vector<int> ans;
    for (int i = 0; i < a.size(); i++)
    {
        b[a[i]] = 1;
    }
    for (int i = 1; i <= n; i++)
    {
        if (b[i] == 0)
        {
            ans.push_back(i);
        }
    }
    return ans;
}

vector<int> generateVector(int n, int k)
{
    vector<int> a(n);
    for (int i = 0; i < a.size(); i++)
    {
        a[i] = i + 1;
    }
    for (int i = 0; i < a.size(); i++)
    {
        int index1 = (rand() * rand()) % a.size();
        int index2 = (rand() * rand()) % a.size();
        swap(a[index1], a[index2]);
    }
    a.resize(n - k);
    return a;
}
vector<int> a;
int main()
{
    ofstream finput, foutput;

    srand(time(NULL));

    long long n, k, minN = 2;
    for (int TC = 1; TC <= 10; TC++)
    {
        finput.open("../testcase/tc" + toString(TC) + "/input.txt");
        foutput.open("../testcase/tc" + toString(TC) + "/output.txt");
        cout << toString(TC) << endl;

        n = (rand() % 10 + 2);

        while (n < minN)
        {
            n = n * (rand() % 10 + 1);
        }
        k = (rand() % (n - 1) + 1);
        finput << n << " " << k << endl;
        vector<int> b = generateVector(n, k);
        for (int i = 0; i < b.size(); i++)
        {
            finput << b[i] << " ";
        }
        finput.close();

        vector<int> ans = solve(b, n);
        for (int i = 0; i < ans.size(); i++)
        {
            foutput << ans[i] << " ";
        }
        foutput.close();
        foutput.close();
        minN *= 10;
        if (minN > 100000)
        {
            minN = 100000;
        }
    }
}