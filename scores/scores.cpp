#include <iostream>
#include <vector>

// a pretty sloppy one function answer to this exercise as I was lazy and wanted to finish the chapter rather than break it down properly!
void name_pairs() {
    std::vector<std::string> names;
    std::vector<int> scores;
    while (true) {
        std::cout << "enter a name: \n";
        std::string name;
        std::cin >> name;
        names.push_back(name);
        std::cout << "enter a score: \n";
        int score;
        std::cin >> score;
        scores.push_back(score);
        if (name == "NoName" && score == 0) break;
    }

    std::cout << "list completed.\n";
    std::cout << "do you want to search for a score or a name?\n";
    std::string choice;
    std::cin >> choice;

    if (choice == "name") {
        std::cout << "enter a name: \n";
        std::string name_lookup;
        std::cin >> name_lookup;
        bool name_found = false;
        int score_index = 0;
        for (int i = 0; i < names.size(); ++i) { 
            if (name_lookup == names[i]) {
                name_found = true;
                score_index = i;
                break;
            } else { 
                name_found = false;
            }
        }
        if (name_found)
            std::cout << "score: " << scores[score_index] << '\n';
        else
            std::cout << "name not found.\n";

    } else {
        std::cout << "enter a score: \n";
        int score_lookup;
        std::vector<std::string> matched_names;
        std::cin >> score_lookup;
        bool score_found = false;
        for (int i = 0; i < names.size(); ++i) {
            if (score_lookup == scores[i]) {
                score_found = true;
                matched_names.push_back(names[i]);
            }
        }

        if (score_found) {
            std::cout << "the people that had a score of " << score_lookup << " are: \n";
            for (std::string s : matched_names) std::cout << s << '\n';
        }

    }
}

int main(){
    name_pairs();
}
