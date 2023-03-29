#include <bits/stdc++.h>

using namespace std;

struct money
{
    long long value;
    long long count;
};

string
toString(int n)
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

vector<money> solve(long long n)
{
    vector<money> moneyList;
    long long a[9] = {1000, 2000, 5000, 10000, 20000, 50000, 100000, 200000, 500000};
    for (int i = 0; i < 9; i++)
    {
        moneyList.push_back({a[i], 0});
    }
    for (int i = moneyList.size() - 1; i >= 0; i--)
    {
        moneyList[i].count = n / moneyList[i].value;
        n -= moneyList[i].value * moneyList[i].count;
    }
    return moneyList;
}

int main()
{
    ofstream finput, foutput;

    srand(time(NULL));

    long long n;
    long long maxN = 10;
    for (int TC = 1; TC <= 10; TC++)
    {
        finput.open("../testcase/tc" + toString(TC) + "/input.txt");
        foutput.open("../testcase/tc" + toString(TC) + "/output.txt");
        cout << toString(TC) << endl;

        n = rand() * rand() % maxN + 1;
        while (n < maxN)
        {
            n *= (rand() % 10 + 1);
        }
        n *= 1000;

        finput << n;
        finput.close();

        vector<money> moneyList = solve(n);
        long long count = 0;
        for (auto m : moneyList)
            count += m.count;

        foutput << count << endl;

        int indexLast = 0;
        for (int i = 0; i < moneyList.size(); i++)
        {
            if (moneyList[i].count > 0)
            {
                indexLast = i;
                break;
            }
        }

        for (int i = moneyList.size() - 1; i >= 0; i--)
            if (moneyList[i].count > 0)
            {
                foutput << moneyList[i].value << " " << moneyList[i].count;
                if (i != indexLast)
                    foutput << endl;
            }

        foutput.close();
        maxN *= 100;
        if (maxN > 100000000000000)
        {
            maxN = 100000000000000;
        }
    }
}