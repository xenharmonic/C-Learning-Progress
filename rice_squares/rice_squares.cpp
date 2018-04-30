#include <iostream>
#include <vector>

using namespace std;

vector<int> calculate_squares(int count) {
    vector<int> output;
    int accum = 1;
    for (int i = 0; i < count; ++i) {
        output.push_back(accum);
        accum *= 2;
    }
    return output;
}

int vector_find(vector<int> vi, int n) {
    for (int i = 0; i < vi.size(); ++i) {
        if (vi[i] > n) {
            return i;
        }
    }
}

void squares() {
    vector<int> squares = calculate_squares(64);
    cout << "How many grains of rice to show the required number of squares for?\n";
    int n;
    cin >> n;
    int x = vector_find(squares, n);
    cout << x << " squares will result in " << n << " grains of rice.\n";
}


int main(){
    squares();
}
