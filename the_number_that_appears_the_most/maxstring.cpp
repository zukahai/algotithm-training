// Find the character that appears the most in a string
// Tìm ký tự xuất hiện nhiều nhất trong chuỗi
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string string_;
    getline(cin, string_);

    int counts[256];

    for (int i = 0; i < string_.length(); i++)
    {
        counts[(int)string_[i]] += 1;
    }
    char maxString = string_[0];
    for (int i = 0; i < string_.length(); i++)
    {
        if (counts[(int)string_[i]] > counts[(int)string_[maxString]])
        {
            maxString = string_[i];
        }
    }
    cout << maxString;
}