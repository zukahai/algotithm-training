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
    int max = 1;
    int temp = 1;
    for (int i = 1; i < a.size(); i++)
        if (a[i] > a[i - 1])
        {
            temp++;
            max = max < temp ? temp : max;
        }
        else
        {
            temp = 1;
        }
    return max;
}

vector<int> arr;

int main()
{
    ofstream finput, foutput;

    srand(time(NULL));

    long long n;
    long long maxN = 5;
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
        arr.resize(n);
        for (int i = 0; i < n; i++)
        {
            arr[i] = rand() * rand() % maxN + 1;
            if (rand() % 2 == 0 && i != 0)
            {
                arr[i] = arr[i - 1] + rand() % maxN + 1;
            }
        }

        finput << n << endl;
        for (int i = 0; i < n; i++)
            finput << arr[i] << " ";
        finput.close();

        foutput << solve(arr) << endl;
        foutput.close();
        maxN *= 10;
        if (maxN > 10000)
        {
            maxN = 10000;
        }
    }
}