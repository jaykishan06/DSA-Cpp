#include <iostream>
using namespace std;

int main() {

    int n = 5;

    for(int row = 1; row <= n; row++) {

        // left spaces
        for(int space = 1; space <= n - row; space++) {
            cout << " ";
        }

        // stars
        for(int col = 1; col <= 2 * row - 1; col++) {

            // middle space for hollow part
            if(row > 1 && row < n && col != 1 && col != 2 * row - 1) {

                // horizontal line of A
                if(row == (n + 1) / 2) {
                    cout << "*";
                }
                else {
                    cout << " ";
                }
            }
            else {
                cout << "*";
            }
        }

        cout << endl;
    }

    return 0;
}