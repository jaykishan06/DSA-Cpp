// Problem: Symmetric Alphabet Pyramid Pattern
// Concept: Nested Loop + Character Pattern

#include <iostream>
using namespace std;

class Solution {
public:
    void printSymmetricAlphabetPyramid(int n) {

        // rows print karne ke liye
        for(int row = 1; row <= n; row++) {

            // starting spaces print karne ke liye
            for(int space = 1; space <= n - row; space++) {
                cout << " ";
            }

            // A se increasing letters print karne ke liye
            char ch = 'A';
            for(int col = 1; col <= row; col++) {
                cout << ch;
                ch++;
            }

            // decreasing letters print karne ke liye
            ch = ch - 2;

            for(int col = 1; col < row; col++) {
                cout << ch;
                ch--;
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

    s.printSymmetricAlphabetPyramid(n);

    return 0;
}