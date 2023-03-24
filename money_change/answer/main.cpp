#include <bits/stdc++.h>
using namespace std;
long long array1[100000000];
long long array2[100000000];
struct money
{
    string name;
    int value;
};

money moneys[9] = {
    {"1000", 1000},
    {"2000", 2000},
    {"5000", 5000},
    {"10000", 10000},
    {"20000", 20000},
    {"50000", 50000},
    {"100000", 100000},
    {"200000", 200000},
    {"500000", 500000}};
int main()
{
    long long n;
    cin >> n;
    long long current = 8;
    long long countMoney = 0;
    string result = "";
    while (n > 0)
    {
        long long quantity = n / moneys[current].value;
        if (quantity > 0)
        {
            n = n - moneys[current].value * quantity;
            countMoney += quantity;
            result += moneys[current].name + " " + to_string(quantity) + "\n";
        }
        current--;
    }
    cout << countMoney << endl
         << result << endl;
}