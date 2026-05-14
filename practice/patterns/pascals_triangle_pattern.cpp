// Problem: Pascal's Triangle Pattern
// Concept: Nested Loop + Combination Formula

#include <iostream>
using namespace std;

class Solution {
public:
    void printPascalsTriangle(int n) {

        // rows ke liye
        for(int row = 0; row < n; row++) {

            int num = 1;

            // spaces print karne ke liye
            for(int space = 0; space < n - row - 1; space++) {
                cout << " ";
            }

            // values print karne ke liye
            for(int col = 0; col <= row; col++) {

                cout << num << " ";

                // next value calculate karo
                num = num * (row - col) / (col + 1);
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

    s.printPascalsTriangle(n);

    return 0;
}