// Problem: Fancy Pattern-1
// Concept: Hourglass Pattern using Nested Loops

// #include <iostream>
// using namespace std;

class Solution {
public:
    void printPattern(int n, char ch) {

        // upper inverted pyramid
        for(int row = n; row >= 1; row -= 2) {

            // starting spaces print karne ke liye
            for(int space = 1; space <= (n - row) / 2; space++) {
                cout << " ";
            }

            // character print karne ke liye
            for(int col = 1; col <= row; col++) {
                cout << ch;
            }

            cout << endl;
        }

        // lower pyramid
        for(int row = 3; row <= n; row += 2) {

            // starting spaces print karne ke liye
            for(int space = 1; space <= (n - row) / 2; space++) {
                cout << " ";
            }

            // character print karne ke liye
            for(int col = 1; col <= row; col++) {
                cout << ch;
            }

            // last row ke baad extra line avoid karne ke liye
            if(row != n) {
                cout << endl;
            }
        }
    }
};

// int main() {

//     int T;
//     cin >> T;

//     while(T--) {

//         int n;
//         char ch;

//         cin >> n >> ch;

//         Solution s;
//         s.printPattern(n, ch);

//         if(T != 0) {
//             cout << endl;
//         }
//     }

//     return 0;
// }