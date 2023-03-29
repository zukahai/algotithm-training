#include <iostream>

using namespace std;

string getResult(long long n)
{
    if (n == 0)
    {
        return "10";
    }
    int number = 9;
    string result = "";
    while (number > 1)
    {
        while (n % number == 0)
        {
            n = n / number;
            result = to_string(number) + result;
                }
        number--;
    }
    if (n != 1)
    {
        return "-1";
    }
    //số hoàn hảo là số gi 
    return result;
}

int main()
{
    long long n;
    cin >> n;
    cout << getResult(n);
}
