#include <iostream>
#include <vector>
#include <cmath>

std::vector<int> eratosthenes(int start, int end) {
    std::vector<bool> prime(n);
    for (int i = 0; i < prime.size(); ++i) prime[i] = true;
    for (int i = 2; i < sqrt(n); ++i) if (prime[i] == true) for (int j = pow(i, 2); j <= n; j += i) prime[j] = false;
    std::vector<int> vi;
    for (int i = 2; i <= n; ++i) if (prime[i]) vi.push_back(i);
    return vi;
}

int main() {
    std::vector<int> primes = eratosthenes(100);
    for (int i : primes) std::cout << i << '\n';
}
