class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2) {
            return 0;
        }

        // isPrime[i] represents the number (2 * i + 1)
        vector<bool> isPrime(n / 2, true);

        int count = 1; // Prime number 2

        // Mark composite odd numbers
        for (int i = 3; 1LL * i * i < n; i += 2) {
            if (isPrime[i / 2]) {

                // Start marking from i * i
                for (long long j = 1LL * i * i; j < n; j += 2 * i) {
                    isPrime[j / 2] = false;
                }
            }
        }

        // Count odd prime numbers
        for (int i = 3; i < n; i += 2) {
            if (isPrime[i / 2]) {
                count++;
            }
        }

        return count;
    }
};