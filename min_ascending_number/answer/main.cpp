#include <bits/stdc++.h>
using namespace std;
int main()
{
    string number;
    getline(cin, number);
    int length = number.length();
    if (length > 10)
    {
        cout << -1;
        return;
    }
    string k = "";
    bool check = true;
    for (int i = 0; i < number.length() - 1; i++)
    {
        if (number[i] < number[i + 1])
        {
            check = false;
            break;
        }
    }
    if (check == true)
    {
        cout << number;
        return;
    }
    for (int i = 0; i < number.length() - 1; i++)
    {
        if (number[i] < number[i + 1])
        {
            check = false;
            break;
        }
    }
    char firstChar = number[0];
    for (int i = 0; i < length; i++)
    {
        /* code */
    }
}