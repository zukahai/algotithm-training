#include <bits/stdc++.h>

using namespace std;

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

int main()
{
    string s;
    getline(cin, s);
    cout << solve(s) << endl;
}