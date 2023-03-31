#include <bits/stdc++.h>
using namespace std;

bool checkLuckyNumber(string number)
{
    for (int i = 0; i < number.length(); i++)
    {
        if (number[i] != '4' && number[i] != '7')
        {
           return false;
        }
        
    }
    return true;
}
int main()
{
    string number;
    getline(cin, number);
    bool check = checkLuckyNumber(number);
    if (check == true)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}