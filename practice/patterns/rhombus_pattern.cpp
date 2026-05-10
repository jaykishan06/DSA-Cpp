// Problem: Rhombus Pattern
// Concept: Nested Loop Pattern

#include <iostream>
using namespace std;

class Solution {
public:
    void printRhombus(int n) {

        // har row ke liye outer loop
        for (int row = 1; row <= n; row++) {

            // starting spaces print karne ke liye
            for (int col = 1; col <= n - row; col++) {
                cout << " ";
            }

            // stars print karne ke liye
            for (int col = 1; col <= n; col++) {
                cout << "* ";
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

    s.printRhombus(n);

    return 0;
}