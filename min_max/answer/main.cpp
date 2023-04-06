#include <bits/stdc++.h>
using namespace std;
int main()
{
    string number;
    getline(cin, number);
    if (number[0] == '0')
    {
        cout << "0";
        return 0;
    }

    for (long long i = 0; i < number.length(); i++)
    {
        for (long long j = i + 1; j < number.length(); j++)
        {
            if (number[i] < number[j])
            {
                char s = number[i];
                number[i] = number[j];
                number[j] = s;
            }
        }
    }
    long long numberResultMax = 0;
    long long numberResultMin = 0;
    long long temp = 1;
    for (long long i = 0; i < number.length() - 1; i++)
    {
        temp *= 10;
    }
    for (long long i = 0; i < number.length(); i++)
    {
        numberResultMax += (number[i] - '0') * temp;
        numberResultMin += (number[(number.length() - i) - 1] - '0') * temp;
        temp /= 10;
    }
    cout << numberResultMax - numberResultMin;
}