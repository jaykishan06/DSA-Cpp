// Problem: Fancy Pattern-2
// Concept: Palindrome Pyramid Pattern

#include <iostream>
using namespace std;

class Solution {
public:
    void printPalindromePyramid(int N) {

        // rows print karne ke liye
        for(int row = 1; row <= N; row++) {

            // starting spaces print karne ke liye
            for(int space = 1; space <= N - row; space++) {
                cout << " ";
            }

            // increasing numbers print karne ke liye
            for(int col = 1; col <= row; col++) {
                cout << col;
            }

            // decreasing numbers print karne ke liye
            for(int col = row - 1; col >= 1; col--) {
                cout << col;
            }

            // next line
            cout << endl;
        }
    }
};

int main() {

    int N;
    cin >> N;

    Solution s;
    s.printPalindromePyramid(N);

    return 0;
}