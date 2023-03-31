#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    int length = s.length();
    int maxIndex = 0;
    int max = 0;
    for (int i = 0; i < s.length(); i++)
    {

        int k = 1;
        int lengthTemp = 0;
        while (true)
        {
            if (i - k < 0 || i + k > length - 1 || s[i - k] != s[i + k])
            {
                break;
            }
            lengthTemp++;
            k++;
        }
        if (lengthTemp > max)
        {
            max = lengthTemp;
            maxIndex = i;
        }
    }
    string rs1 = s.substr(maxIndex - max, max * 2 + 1);
    maxIndex = 0;
    max = -1;
    for (int i = 0; i < s.length() - 1; i++)
    {
        int k = 1;
        int lengthTemp = 0;
        if (s[i] != s[i + 1])
        {
            continue;
        }
        while (true)
        {
            if (i - k < 0 || i + k + 1 > length - 1 || s[i - k] != s[i + k + 1])
            {
                break;
            }
            lengthTemp++;
            k++;
        }
        if (lengthTemp > max)
        {
            max = lengthTemp;
            maxIndex = i;
        }
    }
    string rs2 = s.substr(maxIndex - max, max * 2 + 2);
    cout << ((rs1.length()) > (rs2.length()) ? rs1 : rs2);
}