// Problem: 0-1 Triangle Pattern
// Concept: Nested Loop + Condition

#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    for(int row = 1; row <= n; row++) {

        for(int col = 1; col <= row; col++) {

            // row + col even => 1
            if((row + col) % 2 == 0) {
                cout << "1 ";
            }
            else {
                cout << "0 ";
            }
        }

        cout << endl;
    }

    return 0;
}