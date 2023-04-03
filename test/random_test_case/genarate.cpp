#include <bits/stdc++.h>

#define name "HaiZuka"
#define timelimit 1000
#define NTC 15

using namespace std;

string filename = ".a.prob";

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

string getPath(string s)
{
    string p = "";
    int count = 0;
    for (int i = s.length() - 1; i >= 0 && p.length() == 0; i--)
    {
        if (s[i] == '\\')
        {
            count++;
            if (count == 2)
            {
                p = s.substr(0, i);
            }
        }
    }
    s = "";
    for (int i = 0; i < p.length(); i++)
        if (p[i] == '\\')
        {
            s = s + "\\\\";
        }
        else
        {
            s = s + p[i];
        }
    s = s + "\\\\solution\\\\haizuka.cpp";
    return s;
}

int main(int argc, char *argv[])
{
    string path = getPath(argv[0]);
    ofstream foutput;
    string input, output, ans;
    string file = "../solution/.cph/" + filename;
    cout << file << endl;
    foutput.open(file);
    ans = "{";
    ans = ans + "\"name\":\"" + name;
    ans = ans + "\",";
    ans = ans + "\"tests\":[";
    for (int TC = 1; TC <= NTC; TC++)
    {

        ans = ans + "{";
        ans = ans + "\"id\":2712" + toString(TC) + ",";
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
    ans = ans + ",\"srcPath\":\"" + path + "\"";
    ans = ans + ",\"url\":\"" + path + "\"";
    ans = ans + ",\"timeLimit\":" + toString(timelimit);
    ans = ans + "}";

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
    std::cout << newStr.length() << std::endl;
    foutput.close();
}