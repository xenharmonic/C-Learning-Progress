#include <iostream>

using namespace std;

// pointer swap of two integers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// bubble sort function
int bubble_sort(int arr[], int n) {
    for (int i=0; i<(n-1); ++i) { // outer loop, the inner swapping loop is repeated with this loop
        for (int j=0; j<n-i-1; ++j) { // inner loop where the swapping happens
            if (arr[j] > arr[j+1]) { // if current number is greater than the next number...
            swap(&arr[j], &arr[j+1]); // swap them
            }
        }
    }
}

// array printing function
void print_array(int arr[], int size) {
    for (int i=0; i<size; ++i) {
        cout << arr[i] << '\n';
    }
}

void run() {
    int arr[] = {4, 50, 3, 30, 90, 120}; // test array
    int n = sizeof(arr) / sizeof(arr[0]); // calc size of array
    bubble_sort(arr, n);
    print_array(arr, n);
}

int main() {
    run();
}
