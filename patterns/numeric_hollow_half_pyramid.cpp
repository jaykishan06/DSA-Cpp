// Problem: Numeric Hollow Half Pyramid
// Concept: Nested Loop Pattern

#include <iostream>
using namespace std;

class Solution {
public:
    void printHollowHalfPyramid(int N) {

        // rows ke liye
        for(int row = 1; row <= N; row++) {

            // first row
            if(row == 1) {
                cout << 1;
            }

            // last row
            else if(row == N) {
                for(int col = 1; col <= N; col++) {
                    cout << col;
                }
            }

            // middle rows
            else {

                // first number
                cout << 1;

                // spaces
                for(int space = 1; space <= row - 2; space++) {
                    cout << " ";
                }

                // last number
                cout << row;
            }

            cout << endl;
        }
    }
};

int main() {

    int N;
    cin >> N;

    Solution s;
    s.printHollowHalfPyramid(N);

    return 0;
}