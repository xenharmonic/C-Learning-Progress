#include <iostream>

using namespace std;

// read from standard input and return the string
string yes_no() {
    string answer;
    while (true) {
    cin >> answer;
    for (char& ch : answer) ch = tolower(ch);
    if (answer != "yes" && answer != "no") 
      cout << "Invalid input, try again: ";
    else
      return answer;
    }
}

// helper to print a string with guessing text for a provided integer
void guess(int n) {
    string prepend = "\nIs the number you are thinking of less than ";
    string s = to_string(n);
    cout << prepend + s + "?\n\n";
}

// return true on receiving "yes", return false otherwise
bool correct(string yes_no) {
    for (char& ch : yes_no) ch = tolower(ch);
    if (yes_no == "yes")
      return true;
    else 
      return false;
}

// function to calculat mean of two integers
int mean(int a, int b) {
    return (a + b) / 2;
}

// main "guessing game" function
void guessing_game() {

    int greater_than = 0;
    int less_than = 100;
    string answer = "no";
    int guesses = 0;

    while (guesses < 7) { // make 7 guesses of the value
      guess(mean(greater_than, less_than)); // starts out with 50, the middle point of the lowest and highest possible values
      answer = yes_no(); // user provides an answer
      if (correct(answer))
        less_than = mean(greater_than, less_than); // if true, start guessing downwards
      else 
        greater_than = mean(greater_than, less_than); // else start guessing upwards
      ++guesses; // increment number of guesses
    }

    // run once guesses loop is over to finish game by asking user if the guessed number is valid (it should be 100% of the time)
    cout << "\nIs the number you were thinking of: " << mean(greater_than, less_than) << "?\n\n";
    answer = yes_no();
    if (correct(answer))
      cout << "\nI win!\n";
    else
      cout << "\nI-Impossible...!\n";

}

int main() {
    guessing_game();
}
