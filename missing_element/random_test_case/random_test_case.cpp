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

int solve(vector<int> a)
{
    vector<int> b(a.size() + 2);
    for (int i = 0; i < a.size(); i++)
    {
        b[a[i]] = 1;
    }
    for (int i = 1; i < b.size(); i++)
    {
        if (b[i] == 0)
        {
            return i;
        }
    }
    return -1;
}

vector<int> generateVector(int n)
{
    int missing = (rand() * rand()) % n + 1;
    vector<int> a(n - 1);
    int index = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (i == missing - 1)
            index++;
        a[i] = index++;
    }
    for (int i = 0; i < a.size(); i++)
    {
        int index1 = (rand() * rand()) % a.size();
        int index2 = (rand() * rand()) % a.size();
        swap(a[index1], a[index2]);
    }
    return a;
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
        a.resize(n);
        vector<int> b = generateVector(n);
        for (int i = 0; i < b.size(); i++)
        {
            finput << b[i] << " ";
        }
        finput.close();

        foutput << solve(b);
        foutput.close();
        minN *= 10;
        if (minN > 100000)
        {
            minN = 100000;
        }
    }
}