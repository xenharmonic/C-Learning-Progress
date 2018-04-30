#include <iostream>
#include <algorithm>
#include <vector>

std::vector<int> vi_input() {
    std::vector<int> vi;
    for (int temp; std::cin >> temp; ) {
        vi.push_back(temp);
    }
    return vi;
}

int mode(std::vector<int> vi) {
    sort(vi.begin(), vi.end());
    int repeats = 0;
    int mode = 0;
    for (int i = 0; i < vi.size()-1; ++i) {
        if (vi[i] == vi[i+1]) {
            ++repeats;
            if (repeats) mode = vi[i];
        } else {
            repeats = 0;
        }
    }
    return mode;
}

int main() {
    std::vector<int> vi = vi_input();
    std::cout << "The mode of this vector is: " << mode(vi) << '\n';
    return 0;
}
