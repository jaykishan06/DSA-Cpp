// Problem: Reverse Alphabet Right Triangle Pattern
// Concept: Nested Loop Pattern

#include <iostream>
using namespace std;

class Solution {
public:
    void printReverseAlphabetTriangle(int n) {

        // rows print karne ke liye
        for(int row = 0; row < n; row++) {

            // har row ka starting character
            char ch = 'A' + (n - 1 - row);

            // columns print karne ke liye
            for(int col = 0; col <= row; col++) {

                // alphabet print karo
                cout << ch;

                // next alphabet
                ch++;
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

    s.printReverseAlphabetTriangle(n);

    return 0;
}