// Problem: Butterfly Number Pattern
// Concept: Nested Loop Pattern

#include <iostream>
using namespace std;

class Solution {
public:
    void printButterflyNumber(int n) {

        // upper half
        for(int row = 1; row <= n; row++) {

            // left numbers
            for(int col = 1; col <= row; col++) {
                cout << col;
            }

            // middle spaces
            for(int space = 1; space <= 2 * (n - row); space++) {
                cout << " ";
            }

            // right numbers
            for(int col = row; col >= 1; col--) {
                cout << col;
            }

            cout << endl;
        }

        // lower half
        for(int row = n - 1; row >= 1; row--) {

            // left numbers
            for(int col = 1; col <= row; col++) {
                cout << col;
            }

            // middle spaces
            for(int space = 1; space <= 2 * (n - row); space++) {
                cout << " ";
            }

            // right numbers
            for(int col = row; col >= 1; col--) {
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
    s.printButterflyNumber(n);

    return 0;
}