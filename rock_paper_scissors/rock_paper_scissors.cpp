#include <iostream>
#include <vector>

using namespace std;

string player_choose() {
    while (true) {
        cout << "rock, paper, scissors?\n";
        string choice;
        cin >> choice;
        if (choice != "rock" && choice != "paper" && choice != "scissors") {
            cout << "Not a valid move, try again.\n";
        } else {
            return choice;
        }
    }
}

string ai_choose(int choice) {
    switch(choice) {
        case 0:
            return "rock";
            break;
        case 1:
            return "paper";
            break;
        case 2:
            return "scissors";
            break;
        default:
            break;
    }
}

void decide_winner(string player_choice, string ai_choice) {
    if (player_choice == ai_choice) {
        cout << "It's a tie.\n";
    } else if (player_choice == "rock" && ai_choice == "scissors" 
            || player_choice == "paper" && ai_choice == "rock"
            || player_choice == "scissors" && ai_choice ==  "paper") {
        cout << "You win!\n";
    } else {
        cout << "You lose...\n";
    }
}

void rock_paper_scissors() {
    vector<int> ai_choices = {0, 2, 1, 1, 0, 2, 1, 0, 2, 2, 0, 1, 2, 0, 1, 2, 0, 1};
    int games_played = 0;
    while (games_played < ai_choices.size()) {
        string player_choice = player_choose();
        cout << "\n...\n\n"; 
        string ai_choice = ai_choose(ai_choices[games_played]);
        cout << "the computer has picked...\n" << ai_choice << '\n';
        cout << "Result of game " << games_played + 1 << "...: \n";
        decide_winner(player_choice, ai_choice);
        ++games_played;
        cout << "\n\n";
    }
}

int main() {
    rock_paper_scissors();
}
