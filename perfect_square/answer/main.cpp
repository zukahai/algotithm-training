#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long number;
    cin >> number;

    long long sqrt_ = (long long)sqrt(number);
    string result = sqrt_ * sqrt_ == number ? "YES" : "NO";
    cout << result;
}
