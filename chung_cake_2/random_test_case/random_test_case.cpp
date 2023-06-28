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

long long solve(long long n, vector<long long> arr)
{
    long long d = 1000000007;
    sort(arr.begin(), arr.end());
    arr[0]++;
    arr[1]++;
    arr[2]++;

    long long temp = min(arr[1] - arr[0], n);
    n -= temp;
    arr[0] += temp;

    if (n > 0)
    {
        temp = min(n / 2, (arr[2] - arr[1]) * 2);
        n -= 2 * temp;
        arr[0] += temp;
        arr[1] += temp;
        if (n == 1)
        {
            arr[1]++;
            n = 0;
        }
    }
    if (n > 0)
    {
        arr[0] += (n / 3 + (n % 3 > 0));
        arr[1] += (n / 3 + (n % 3 == 2));
        arr[2] += (n / 3);
    }
    return ((((arr[0] % d) * (arr[1] % d)) % d) * (arr[2] % d)) % d;
}

int main()
{
    ofstream finput, foutput;
    vector<long long> a(3);

    srand(time(NULL));

    long long n, minN = 2;
    for (int TC = 2; TC <= 13; TC++)
    {
        finput.open("../testcase/tc" + toString(TC) + "/input.txt");
        foutput.open("../testcase/tc" + toString(TC) + "/output.txt");
        cout << toString(TC) << endl;

        n = rand() % 10;
        while (n < minN)
        {
            n = n * 10 + rand() % 10;
        }
        a[1] = (rand() * rand()) % n;
        a[2] = (rand() * rand()) % n;
        a[0] = (rand() * rand()) % n;
        finput << n << endl;
        finput << a[0] << " " << a[1] << " " << a[2];
        finput.close();

        foutput << solve(n, a);
        foutput.close();
        minN *= 15;
        if (minN > 100000000000000000)
        {
            minN = 100000000000000000;
        }
    }
}