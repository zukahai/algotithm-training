#include <bits/stdc++.h>

using namespace std;
#define Nmax 2009
bool prime[Nmax + 5];

void sang_nt() {
    // prime all is true
    for (int i = 2; i <= Nmax; i++)
        prime[i] = true;
    prime[0] = prime[1] = false;
    for (int i = 2; i <= Nmax; i++) {
        if (prime[i]) {
            for (int j = i * i; j <= Nmax; j += i) {
                prime[j] = false;
            }
        }
    }
}

int main() {
    sang_nt();
    int m, n;
    cin >> m >> n;
    for (int i = 0; i <= m + n; i++)
        if (prime[i])
            cout << i << " ";
}