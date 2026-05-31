// Problem: Inverted Right Angle Triangle Pattern
// Concept: Nested Loop Pattern

#include <iostream>
using namespace std;

class Solution {
public:
    void printInvertedRightAngleTriangle(int n) {

        // row ke liye outer loop
        for (int row = 1; row <= n; row++) {

            // har next row me ek star kam print hoga
            for (int col = 1; col <= (n - row) + 1; col++) {
                cout << "* ";
            }

            // next line me jane ke liye
            cout << endl;
        }
    }
};

int main() {
    Solution s;

    int n;
    cin >> n;

    s.printInvertedRightAngleTriangle(n);

    return 0;
}