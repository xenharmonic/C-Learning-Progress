#include <iostream>
#include <vector>

using namespace std;

vector<double> calculate_squares(int count) {
    vector<double> output;
    int accum = 1;
    for (int i = 0; i < count; ++i) {
        output.push_back(accum);
        accum *= 2;
    }
    return output;
}

void max_grains() {
    vector<double> grains = calculate_squares(64);
    for (int i = 0; i < grains.size(); ++i) {
    cout << grains[i] << '\n';
    }
}

int main() {
    max_grains();
}

