// Problem: Fancy Pattern-3
// Concept: Hourglass Pattern using Nested Loops

#include <iostream>
using namespace std;

class Solution {
public:
    void printHourglass(int N, char C) {

        // upper half print karne ke liye
        for(int row = N; row >= 1; row -= 2) {

            // starting spaces print karne ke liye
            for(int space = 1; space <= (N - row) / 2; space++) {
                cout << " ";
            }

            // character print karne ke liye
            for(int col = 1; col <= row; col++) {
                cout << C;
            }

            cout << endl;
        }

        // lower half print karne ke liye
        for(int row = 3; row <= N; row += 2) {

            // starting spaces print karne ke liye
            for(int space = 1; space <= (N - row) / 2; space++) {
                cout << " ";
            }

            // character print karne ke liye
            for(int col = 1; col <= row; col++) {
                cout << C;
            }

            cout << endl;
        }
    }
};

int main() {

    int N;
    char C;

    cin >> N >> C;

    Solution s;
    s.printHourglass(N, C);

    return 0;
}