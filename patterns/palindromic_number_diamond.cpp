// Problem: Palindromic Number Diamond
// Concept: Nested Loop Pattern

#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    // upper half
    for(int row = 1; row <= n; row++) {

        // spaces
        for(int space = 1; space <= n - row; space++) {
            cout << " ";
        }

        // decreasing numbers
        for(int col = row; col >= 1; col--) {
            cout << col;
        }

        // increasing numbers
        for(int col = 2; col <= row; col++) {
            cout << col;
        }

        cout << endl;
    }

    // lower half
    for(int row = n - 1; row >= 1; row--) {

        // spaces
        for(int space = 1; space <= n - row; space++) {
            cout << " ";
        }

        // decreasing numbers
        for(int col = row; col >= 1; col--) {
            cout << col;
        }

        // increasing numbers
        for(int col = 2; col <= row; col++) {
            cout << col;
        }

        cout << endl;
    }

    return 0;
}