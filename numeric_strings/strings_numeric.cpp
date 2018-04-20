#include <iostream>
#include <vector>

using namespace std;

void string_numeric() {
    bool is_int = false;
    vector<string> number_strings = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    while (true) {
        string input;
        cin >> input;
        for (int i = 0; i < number_strings.size(); ++i) {
            if (input == number_strings[i])
                cout << i << '\n';
            else
                is_int = true;
        }
        if (is_int) {
            for (int i = 0; i < number_strings.size(); ++i) 
                if (input == to_string(i)) cout << number_strings[i] << '\n';
        }
    }
}

int main(){
    string_numeric();
}
