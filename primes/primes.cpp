#include <iostream>
#include <vector>

using namespace std;

// To solve this, we work with the fact that any real number after 
// the prime series {2, 3, 5, 7} will also be prime if it is not
// divisible by one of them.

bool is_prime(vector<int> primes, int n) {
    bool prime = true;
    for (int i = 0; i < primes.size(); ++i) 
        if (n % primes[i] == 0) prime = false;
    return prime;
}

vector<int> find_primes(vector<int> primes, int n) {
    vector<int> new_primes;
    for (int i = 2; i <= n; ++i) {
        if (is_prime(primes, i)) new_primes.push_back(i);
    }
    return new_primes;
}

void print_primes(int n) {
    vector<int> primes = {2, 3, 5, 7};
    vector<int> new_primes = find_primes(primes, n);
    primes.insert(primes.end(), new_primes.begin(), new_primes.end());
    for (int i : primes) cout << i << '\n';
}

int main() {
    print_primes(20000);
    return 0;
}
