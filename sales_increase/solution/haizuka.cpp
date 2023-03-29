#include <bits/stdc++.h>

using namespace std;

int solve(vector<int> a)
{
    int max = 1;
    int temp = 1;
    for (int i = 1; i < a.size(); i++)
        if (a[i] > a[i - 1])
        {
            temp++;
            max = max < temp ? temp : max;
        }
        else
        {
            temp = 1;
        }
    return max;
}

vector<int> arr;

int main()
{
    long long n;
    cin >> n;
    arr.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << solve(arr) << endl;
}