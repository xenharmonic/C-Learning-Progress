#include <iostream>

int lcm(int a, int b) {
    for (int i = 2; i < abs(a); ++i) if(abs(a) % i == 0 && abs(b) % i == 0) return i;
}

int main() {
    int a, b;
    std::cin >> a >> b;
    std::cout << lcm(a, b) << '\n';
}
