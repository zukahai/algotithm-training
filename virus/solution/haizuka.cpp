#include <bits/stdc++.h>

using namespace std;

string toString2(int n)
{
    string ans = "";
    while (n > 0)
    {
        ans = char(n % 10 + '0') + ans;
        n /= 10;
    }
    return ans;
}

string decToBin(long long n)
{
    string ans = "";
    while (n > 0)
    {
        ans = char(n % 2 + '0') + ans;
        n /= 2;
    }
    return ans;
}

string solve(long long n)
{
    string bin = decToBin(n);
    string ans = "";
    int count_one = 0;
    for (int i = 0; i < bin.size(); i++)
    {
        count_one += bin[i] == '1';
    }
    ans += (toString2(bin.length()) + " " + toString2(count_one));
    ans += "\n";
    for (int i = 0; i < bin.size(); i++)
    {
        if (bin[i] == '1')
        {
            ans += toString2(i + 1) + " ";
        }
    }
    return ans;
}

int main()
{
    long long n;
    cin >> n;
    cout << solve(n);
}