// Problem: ZigZag / X Pattern
// Concept: Diagonal Pattern using Nested Loops

#include <iostream>
using namespace std;

class Solution {
public:
    void printZigZag(int n) {

        int size = 2 * n + 1;

        // rows ke liye
        for(int row = 0; row < size; row++) {

            // columns ke liye
            for(int col = 0; col < size; col++) {

                // diagonal positions par star print karo
                if(col == row || col == size - row - 1) {
                    cout << "*";
                }
                else {
                    cout << " ";
                }
            }

            // last row ke baad extra line avoid karne ke liye
            if(row != size - 1) {
                cout << endl;
            }
        }
    }
};

int main() {

    int n;
    cin >> n;

    Solution s;
    s.printZigZag(n);

    return 0;
}