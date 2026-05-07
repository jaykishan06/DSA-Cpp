// Problem: Right Angle Triangle Pattern
// Concept: Nested Loop Pattern

#include <iostream>
using namespace std;

class Solution {
public:
    void printRightAngleTriangle(int n) {

        // row ke liye outer loop
        for (int row = 1; row <= n; row++) {

            // har row me row jitne stars print honge
            for (int col = 1; col <= row; col++) {
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

    s.printRightAngleTriangle(n);

    return 0;
}