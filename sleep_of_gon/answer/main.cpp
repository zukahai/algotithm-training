#include <bits/stdc++.h>
using namespace std;
int arr[1000004];
int main()
{
    int n;
    cin >> n;
    int temp;
    for (int i = 0; i < n * 3; i++)
    {
        cin >> arr[i];
    }
    int sumMin = 0;

    for (int i = 0; i < n * 3 - 3; i += 6)
    {
        int hour1 = arr[i + 1];
        int min1 = arr[i + 2];
        int hour2 = arr[i + 4];
        int min2 = arr[i + 5];
        if (hour2 >= hour1)
        {
            sumMin += ((hour2 * 60 + min2) - (hour1 * 60 + min1));
        }
        else if (hour2 < hour1)
        {
            int temp = (24 * 60) - (hour1 * 60 + min1);
            int temp2 = temp + (hour2 * 60 + min2);
            sumMin += temp2;
        }
    }
    cout << sumMin;
}