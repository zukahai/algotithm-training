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

string solve(string s)
{
    string max = "";
    string temp = "";
    for (int i = 0; i < s.size(); i++)
    {
        temp = s[i];
        int index1 = i - 1;
        int index2 = i + 1;
        while (index1 >= 0 && index2 < s.size() && s[index1] == s[index2])
        {
            temp = s[index1] + temp + s[index2];
            index1--;
            index2++;
        }
        if (temp.size() > max.size())
        {
            max = temp;
        }
    }

    for (int i = 0; i < s.size() - 1; i++)
        if (s[i] == s[i + 1])
        {
            temp = s[i];
            temp = temp + s[i + 1];
            int index1 = i - 1;
            int index2 = i + 2;
            while (index1 >= 0 && index2 < s.size() && s[index1] == s[index2])
            {
                temp = s[index1] + temp + s[index2];
                index1--;
                index2++;
            }
            if (temp.size() > max.size())
            {
                max = temp;
            }
        }
    return max;
}

string generateString(int n)
{
    string chars = "abcdefghijklmnopqrstuvwxyz";
    string ans = "";
    while (n--)
    {
        ans = chars[rand() % chars.length()] + ans;
    }
    if (rand() % 3 < 2)
    {
        for (int i = 0; i < ans.size() / 2; i++)
            ans[i] = ans[ans.size() - 1 - i];
    }
    return ans;
}
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
        string s = "";
        while (s.length() < n)
        {
            s = s + generateString(rand() % (n - s.length()) + 1);
            // cout << s.length() << " " << n << endl;
        }
        finput << s << endl;
        finput.close();

        foutput << solve(s);
        foutput.close();
        minN *= 10;
        if (minN > 10000)
        {
            minN = 10000;
        }
    }
}