#include <iostream>
using namespace std;

int main() {
    int n;

    // Take input from user
    cin >> n;

    // Loop for rows
    for (int row = 1; row <= n; row++) {

        // Loop for printing stars in each row
        for (int col = 1; col <= row; col++) {
            cout << "* ";
        }

        // Move to next line after each row
        cout << endl;
    }

    return 0;
}