// Problem: Hollow Diamond Number Pattern
// Concept: Nested Loop Pattern

#include <iostream>
using namespace std;

class Solution {
public:
    void printHollowDiamondNumber(int n) {

        // upper half
        for(int row = 1; row <= n; row++) {

            // spaces
            for(int space = 1; space <= n - row; space++) {
                cout << " ";
            }

            // first number
            cout << 1;

            // middle hollow spaces
            if(row > 1) {
                for(int space = 1; space <= 2 * row - 3; space++) {
                    cout << " ";
                }

                // last number
                cout << row;
            }

            cout << endl;
        }

        // lower half
        for(int row = n - 1; row >= 1; row--) {

            // spaces
            for(int space = 1; space <= n - row; space++) {
                cout << " ";
            }

            // first number
            cout << 1;

            // middle hollow spaces
            if(row > 1) {
                for(int space = 1; space <= 2 * row - 3; space++) {
                    cout << " ";
                }

                // last number
                cout << row;
            }

            cout << endl;
        }
    }
};

int main() {

    int n;
    cin >> n;

    Solution s;
    s.printHollowDiamondNumber(n);

    return 0;
}