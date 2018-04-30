#include <iostream>
#include <vector>

using namespace std;

void bleeps() {
    vector<string> disliked_words = {"broccoli", "spinach", "onions", "carrots", "mushrooms"}; // vector of disliked words
    bool disliked = false; // variable to check if a disliked word has been found or not
    for(string word; cin >> word;) {
        for (int i = 0; i < disliked_words.size(); ++i) {
            if (word == disliked_words[i]) disliked = true;
        }

    if (!disliked) // if statement runs after the prior for loop, checking the disliked bool value to decide what to print with cout
        cout << word << '\n';
    else
        cout << "BLEEP\n";
    }

}

int main() {
    bleeps();
}
