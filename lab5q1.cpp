#include <iostream>
using namespace std;

// Function to swap two elements
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to print the permutation
void printPermute(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to generate permutations
void generatePermute(int arr[], int start, int end) {
    if (start == end) {
        printPermute(arr, end + 1);
    } else {
        for (int i = start; i <= end; ++i) {
            swap(&arr[start], &arr[i]); // Swap to create new permutation
            generatePermute(arr, start + 1, end); // Recursively generate permutations for the next position
            swap(&arr[start], &arr[i]); // Swap back to restore the original array
        }
    }
}

int main() {
    int arr[4] = {1, 2, 3, 4};
    generatePermute(arr, 0, 3); // Generate permutations for the entire array
    return 0;
}
