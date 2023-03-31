#include <bits/stdc++.h>
using namespace std;
void sortArr(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j + 1 < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int arr[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }
    sortArr(arr, 4);
    if (arr[0] + arr[1] + arr[2] == arr[3])
    {
        cout << "YES";
    }
    else if (arr[0] + arr[3] == arr[1] + arr[2])
    {
        cout << "YES";
    }
    else
        cout << "NO";
}