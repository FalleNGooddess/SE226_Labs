void sieve_of_eratosthenes(int donut[], int n) {

    int maximum = 0;

    for (int d = 0; d < n; d++) {

        if (donut[d] > maximum) {
            maximum = donut[d];
        }
    }

    bool prime[maximum + 1];

    for (int d = 0; d <= maximum; d++) {
        prime[d] = true;
    }

    prime[0] = false;
    prime[1] = false;

    for (int p = 2; p * p <= maximum; p++) {

        if (prime[p]) {
            for (int d = p * 2; d <= maximum; d += p) {
                prime[d] = false;
            }
        }
    }

    for (int d = 0; d < n; d++) {
        if (prime[donut[d]]) {
            cout << donut[d] << " ";
        }
    }
}
