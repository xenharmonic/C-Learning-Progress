#include <iostream>
#include <algorithm>
#include <vector>

std::vector<std::string> vstr_input() {
    std::vector<std::string> vstr;
    for (std::string temp; std::cin >> temp; )
        vstr.push_back(temp);
    return vstr;
}

std::string string_min(std::vector<std::string> vstr) {
    int num_chars = 100;
    std::string min = " ";
    for (int i = 0; i < vstr.size(); ++i) {
        if (vstr[i].size() < num_chars) {
            min = vstr[i];
            num_chars = vstr[i].size();
        }
    }
    return min;
}

std::string string_max(std::vector<std::string> vstr) {
    int num_chars = 0;
    std::string max = " ";
    for (int i = 0; i < vstr.size(); ++i) {
        if (vstr[i].size() > num_chars) {
            max = vstr[i];
            num_chars = vstr[i].size();
        }
    }
    return max;
}

std::vector<std::string> bubble_string(std::vector<std::string> vstr) {
    std::string temp = " ";
    for (int i = 0; i < vstr.size()-1; ++i) {
        for (int j = 0; j < vstr.size()-i-1; ++j) {
            if (vstr[j+1].size() < vstr[j].size()) {
                temp = vstr[j];
                vstr[j] = vstr[j+1];
                vstr[j+1] = temp;
            }
        }
    }
    return vstr;
}

std::string string_mode(std::vector<std::string> vstr) {
    std::vector<std::string> sorted_strings = bubble_string(vstr);
    std::string mode = " ";
    int repeats = 0, most_repeats = 0;
    for (int i = 0; i < sorted_strings.size()-1; ++i) {
        if (sorted_strings[i] == sorted_strings[i+1]) {
            ++repeats;
            if (repeats > most_repeats) {
                mode = sorted_strings[i];
                most_repeats = repeats;
            }
        } else repeats = 0;
    }
    if (mode != " ") 
        return mode;
    else
        return "There is no mode.\n";
}

void print_vstr(std::vector<std::string> vstr) {
    for (std::string s : vstr) std::cout << s << '\n';
}

int main(){
    std::vector<std::string> vstr = vstr_input();
    std::cout << "minimum: " << string_min(vstr) << '\n';
    std::cout << "maximum: " << string_max(vstr) << '\n';
    std::cout << "mode: "    << string_mode(vstr) << '\n';;
    string_mode(vstr);
    return 0;
}
