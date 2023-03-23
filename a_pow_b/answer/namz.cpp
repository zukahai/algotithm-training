#include <bits/stdc++.h>
#include<fstream>
using namespace std;
int covertToBinary(long a)
{
   string result = "";
   while (a > 0)
   {
      if (a % 2 == 0)
         result = "0" + result;
      else
         result = "1" + result;
      a /= 2;
   }
   return stoi(result);
}
long modPow(long a, long b, long c)
{
   int result = 1; 
   a %= c;
   while (b > 0)
   {
      if (b & 1)
      // vì khi chuyển sang nhị phân thì số lẻ cuối cùng là 1
         result = (result * a) % c;
      b >>= 1;
      a = (a * a) % c;
   }
   return result;
}


int main()
{
//    long a, b;
//    long c = 1000;
//    cin >> a >> b;
//    cout << modPow(a, b, c) << endl;

    string input = readInput();
    cout << input << endl;
    return 0;
}