// Problem: Diamond Number Pattern
// Concept: Nested Loop Pattern

#include <iostream>
using namespace std;

class Solution {
public:
    void printDiamondNumber(int n) {

        // upper half
        for(int row = 1; row <= n; row++) {

            // spaces
            for(int space = 1; space <= n - row; space++) {
                cout << " ";
            }

            // increasing numbers
            for(int col = 1; col <= row; col++) {
                cout << col;
            }

            // decreasing numbers
            for(int col = row - 1; col >= 1; col--) {
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

            // increasing numbers
            for(int col = 1; col <= row; col++) {
                cout << col;
            }

            // decreasing numbers
            for(int col = row - 1; col >= 1; col--) {
                cout << col;
            }

            cout << endl;
        }
    }
};

int main() {

    int n;
    cin >> n;

    Solution s;
    s.printDiamondNumber(n);

    return 0;
}