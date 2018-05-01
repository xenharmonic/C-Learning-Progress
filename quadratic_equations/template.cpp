#include <iostream>
#include <cmath>

double d_input() {
    double d;
    std::cin >> d;
    return d;
}

double x1(double a, double b, double c) {
    return (-b - sqrt(pow(b, 2) - (4 * a * c))) / (2 * a);
}

double x2(double a, double b, double c) {
    return (-b + sqrt(pow(b, 2) - (4 * a * c))) / (2 * a);
}

int main() {
    std::cout << "Enter values for a, b and c.\n";
    double a = d_input();
    double b = d_input();
    double c = d_input();
    std::cout << "The negative answer is: " << x1(a, b, c) << '\n';
    std::cout << "The positive answer is: " << x2(a, b, c) << '\n';

}
