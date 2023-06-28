#include <bits/stdc++.h>

using namespace std;

string toString(int n)
{
    string ans = "";
    while (n > 0)
    {
        ans = char(n % 10 + '0') + ans;
        n /= 10;
    }
    if (ans.length() == 1)
    {
        ans = "0" + ans;
    }
    return ans;
}
string solve(vector<int> a)
{
    sort(a.begin(), a.end());
    if (a[0] + a[3] == a[1] + a[2])
        return "YES";
    if (a[0] + a[1] + a[2] == a[3])
        return "YES";
    return "NO";
}
int main()
{
    vector<int> a(4);
    ofstream finput, foutput;

    srand(time(NULL));

    long long n, minN = 3;
    for (int TC = 1; TC <= 15; TC++)
    {
        finput.open("../testcase/tc" + toString(TC) + "/input.txt");
        foutput.open("../testcase/tc" + toString(TC) + "/output.txt");
        cout << toString(TC) << endl;

        n = 4;
        int sum = 0;
        for (int i = 0; i < 4; i++)
        {
            a[i] = rand() % (10 + 10 * TC);
            sum += a[i];
        }

        a[3] = a[0] + a[1] - rand() % 10;

        if (a[3] < 1)
            a[3] = 1;
        a[2] = a[0] + a[1] - a[3];
        for (int i = 1; i < 100; i++)
        {
            int index1 = rand() % 4;
            int index2 = rand() % 4;
            swap(a[index1], a[index2]);
        }

        finput << a[0] << " " << a[1] << " " << a[2] << " " << a[3];
        finput.close();

        foutput << solve(a);
        foutput.close();
    }
}