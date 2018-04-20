#include <iostream>

using namespace std;

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    return a / b;
}

char choose_operation() {
    bool allowed = false;
    char allowed_operations[4] = {'+', '-', '*', '/'};

    while(true) {
        cout << "Enter an operation.\n";
        char input;
        cin >> input;
        for (int i = 0; i < 4; ++i) {
            if (input == allowed_operations[i]) {
                allowed = true;
            }
        }

        if (allowed)
            return input;
        else
            cout << allowed << '\n' << "Please enter a valid operation.\n";

    }
}

double choose_double() {
    cout << "Enter a value.\n";
    double a;
    cin >> a;
    return a;
}

void calculator() {
    double result = 0;
    double a = choose_double();
    double b = choose_double();
    char operation = choose_operation();
    switch(operation) {
        case '+':
            cout << "The sum of " << a << " and " << b << " is " << add(a, b) << '\n';
            break;
        case '-':
            cout << "The difference of " << a << " and " << b << " is " << subtract(a, b) << '\n';
            break;
        case '*':   
            cout << "The product of " << a << " and " << b << " is " << multiply(a, b) << '\n';
            break;
        case '/':
            cout << "The quotient of " << a << " and " << b << " is " << divide(a, b) << '\n';
            break;
        default:
            cout << "Error; operation failed.\n";
            break;
    }
}

int main(){
    calculator();
}
