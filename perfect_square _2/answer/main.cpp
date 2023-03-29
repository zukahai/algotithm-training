#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long number;
    cin >> number;
    long long result;
    long long sqrt_ = sqrt(number);
    sqrt_++;
    cout << sqrt_ * sqrt_ - number;
}
