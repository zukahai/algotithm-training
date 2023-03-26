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

string readFile(string fileName)
{
    ifstream finput;
    string line, ans = "";
    finput.open(fileName);
    if (finput.is_open())
    {
        string line;
        while (getline(finput, line))
        {
            // Xử lý chuỗi line ở đây
            ans = ans + line + "\n";
        }
        finput.close();
    }
    ans = ans.substr(0, ans.length() - 1);
    return ans;
}

int main()
{
    ofstream foutput;
    string input, output, ans;
    foutput.open("../testcase/.testcase");
    ans = "";
    ans = ans + "\"tests\":[";
    int NTC = 10;
    for (int TC = 1; TC <= NTC; TC++)
    {

        ans = ans + "{";
        ans = ans + "\"id\":2712" + toString(TC) + ", ";
        ans = ans + "\"input\":";
        ans = ans + "\"";
        input = readFile("../testcase/tc" + toString(TC) + "/input.txt");
        output = readFile("../testcase/tc" + toString(TC) + "/output.txt");
        ans = ans + input;
        ans = ans + "\",";
        ans = ans + "\"output\":";
        ans = ans + "\"";
        ans = ans + output;
        ans = ans + "\"";
        ans = ans + "}";
        if (TC != NTC)
        {
            ans = ans + ",";
        }
    }
    ans = ans + "]";

    string newStr;
    for (char c : ans)
    {
        if (c == '\n')
        {
            newStr += "\\n";
        }
        else
        {
            newStr += c;
        }
    }
    foutput << newStr;
    std::cout << newStr << std::endl;
    foutput.close();
}