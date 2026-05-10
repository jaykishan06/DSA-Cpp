// Problem: Number Triangle Pattern
// Concept: Nested Loop Pattern

#include <iostream>
using namespace std;

class Solution {
public:
    void printNumberTriangle(int n) {

        // har row ke liye outer loop
        for (int row = 1; row <= n; row++) {

            // row number ko row times print karne ke liye
            for (int col = 1; col <= row; col++) {
                cout << row;
            }

            // next line
            cout << endl;
        }
    }
};

int main() {
    Solution s;

    int n;
    cin >> n;

    s.printNumberTriangle(n);

    return 0;
}