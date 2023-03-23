#include <bits/stdc++.h>
using namespace std;
const int LENGTH = 10000003;
bool checkPrime[LENGTH];
int main()
{
   int number;
   cin >> number;
   long long a[number];
   for (int i = 0; i < number; i++)
   {
      cin >> a[i];
   }
   checkPrime[0] = checkPrime[1] = false;
   for (long long i = 2; i < LENGTH; i++)
   {
      checkPrime[i] = true;
   }
   for (long long i = 2; i < sqrt(LENGTH); i++)
   {
      if (checkPrime[i] == true)
      {
         for (long long j = i * 2; j < LENGTH; j += i)
         {
            checkPrime[j] = false;
         }
      }
   }
   for (long long i = 0; i < number; i++)
   {
      if (a[i] > 0 && checkPrime[a[i]] == true)
      {
         cout << a[i] << " ";
      }
   }
   return 0;
}