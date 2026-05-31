// Problem: Number Pyramid Pattern
// Concept: Nested Loop Pattern

#include <iostream>
using namespace std;

class Solution {
public:
    void printNumberPyramid(int n) {

        // row print karne ke liye
        for(int row = 1; row <= n; row++) {

            // starting spaces print karne ke liye
            for(int col = 1; col <= n - row; col++) {
                cout << " ";
            }

            // numbers print karne ke liye
            for(int col = 1; col <= row; col++) {
                cout << col << " ";
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

    s.printNumberPyramid(n);

    return 0;
}