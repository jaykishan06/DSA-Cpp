#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // rows ke liye loop
    for (int row = 1; row <= n; row++) {

        // first ya last row → full stars
        if (row == 1 || row == n) {
            for (int col = 1; col <= n; col++) {
                cout << "*";
            }
        }
        else {
            // middle rows

            cout << "*";   // first star

            // beech me (n-2) spaces
            for (int col = 1; col <= n - 2; col++) {
                cout << " ";
            }

            cout << "*";   // last star
        }

        cout << endl;   // next line
    }

    return 0;
}