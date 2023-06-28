#include <bits/stdc++.h>

using namespace std;

string solve(string a, string b)
{
    string ans = "";
    int indexA = 0, indexB = 0;
    while (indexA < a.length() && indexB < b.length())
    {
        if (a[indexA] != b[indexB])
        {
            if (a[indexA] > b[indexB])
            {
                ans = ans + a[indexA];
                indexA++;
            }
            else
            {
                ans = ans + b[indexB];
                indexB++;
            }
        }
        else
        {
            int k = 1;
            while (indexA + k < a.length() && indexB + k < b.length() && a[indexA + k] == b[indexB + k] && a[indexA + k] == a[indexA + k - 1])
            {
                k++;
            }
            if (indexA + k < a.length() && indexB + k < b.length())
            {
                if (a[indexA + k] > b[indexB + k])
                {
                    ans = ans + a.substr(indexA, k);
                    indexA += k;
                }
                else
                {
                    ans = ans + b.substr(indexB, k);
                    indexB += k;
                }
            }
            else if (indexA + k >= a.length() && indexB + k >= b.length())
            {
                ans = ans + a.substr(indexA, k);
                indexA += k;
            }
            else if (indexA + k >= a.length())
            {
                if (b[indexB + k] > b[indexB + k - 1])
                {
                    ans = ans + b.substr(indexB, k);
                    indexB += k;
                }
                else
                {
                    ans = ans + b.substr(indexB, k);
                    indexB += k;
                }
            }
            else
            {
                if (a[indexA + k] > a[indexA + k - 1])
                {
                    ans = ans + a.substr(indexA, k);
                    indexA += k;
                }
                else
                {
                    ans = ans + a.substr(indexA, k);
                    indexA += k;
                }
            }
        }
    }
    while (indexA < a.length())
    {
        ans = ans + a[indexA];
        indexA++;
    }
    while (indexB < b.length())
    {
        ans = ans + b[indexB];
        indexB++;
    }
    return ans;
}

int main()
{
    string a, b;
    cin >> a >> b;
    cout << solve(a, b);
}