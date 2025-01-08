#include <bits/stdc++.h>
using namespace std;

// Function to perform the sieve of Eratosthenes to find all primes up to a given limit
std::vector<int> sieve_of_eratosthenes(int limit) {
    std::vector<bool> sieve(limit + 1, true);
    sieve[0] = sieve[1] = false;

    for (int i = 2; i <= std::sqrt(limit); ++i) {
        if (sieve[i]) {
            for (int j = i * i; j <= limit; j += i) {
                sieve[j] = false;
            }
        }
    }

    std::vector<int> primes;
    for (int i = 2; i <= limit; ++i) {
        if (sieve[i]) {
            primes.push_back(i);
        }
    }

    return primes;
}

// Function to count primes in the range [L, R] using the segmented sieve
int count_primes_in_range(long long L, long long R) {
    if (L < 2) L = 2; // 1 is not prime

    // Step 1: Generate primes up to sqrt(R)
    long long limit = std::sqrt(R) + 1;
    std::vector<int> small_primes = sieve_of_eratosthenes(limit);

    // Step 2: Create a boolean array for the range [L, R]
    int range_size = R - L + 1;
    std::vector<bool> is_prime(range_size, true);

    // Step 3: Mark non-primes in the range [L, R] using the small primes
    for (int prime : small_primes) {
        // Find the first number in the range [L, R] that is divisible by 'prime'
        long long start = max(prime * prime,(int) (L + prime - 1) / prime * prime);
        if (start > R) continue;

        for (long long j = start; j <= R; j += prime) {
            is_prime[j - L] = false;
        }
    }

    // Step 4: Count the number of primes in the range [L, R]
    int count = 0;
    for (int i = 0; i < range_size; ++i) {
        if (is_prime[i]) {
            ++count;
        }
    }

    return count;
}

int main() {
    long long L = 1;
    long long R = 100000000000LL; // 10^11

    int prime_count = count_primes_in_range(L, R);
    std::cout << "Number of primes in the range [" << L << ", " << R << "] is: " << prime_count << std::endl;

    return 0;
}
