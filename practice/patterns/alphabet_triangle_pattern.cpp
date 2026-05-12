// Problem: Alphabet Triangle Pattern
// Concept: Nested Loop + Character Pattern

#include <iostream>
using namespace std;

class Solution {
public:
    void printAlphabetTriangle(int n) {

        // rows print karne ke liye
        for(int row = 1; row <= n; row++) {

            // har row me A se start hoga
            char ch = 'A';

            // columns print karne ke liye
            for(int col = 1; col <= row; col++) {

                // character print karo
                cout << ch;

                // next alphabet ke liye increment
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

    s.printAlphabetTriangle(n);

    return 0;
}