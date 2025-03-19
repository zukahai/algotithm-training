 for (int i = 2; i <= Nmax; i++) {
        if (prime[i]) {
            for (int j = i * i; j <= Nmax; j += i) {
                prime[j] = false;
            }
        }
    }