#include <bits/stdc++.h>

using namespace std;

struct money
{
    long long value;
    long long count;
};

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
    long long n;
    cin >> n;
    vector<money> moneyList = solve(n);
    long long count = 0;
    for (auto m : moneyList)
        count += m.count;

    cout << count << endl;

    for (int i = moneyList.size() - 1; i >= 0; i--)
        if (moneyList[i].count > 0)
        {
            cout << moneyList[i].value << " " << moneyList[i].count << endl;
        }
}