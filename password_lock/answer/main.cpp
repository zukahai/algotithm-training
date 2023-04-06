#include <bits/stdc++.h>
using namespace std;

int main()
{
    string number;
    getline(cin, number);
    string password;
    getline(cin, password);
    int count = 0;
    for (int i = 0; i < number.length(); i++)
    {
        count += (min(abs(number[i] - password[i]), 10 - (abs(number[i] - password[i]))));
    }
    cout << count;
}