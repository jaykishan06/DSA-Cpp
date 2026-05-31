#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    // har row ke liye loop
    for (int row = 1; row <= n; row++) {

        // har column ke liye loop
        for (int col = 1; col <= m; col++) {

            // agar border pe hai (first/last row ya column)
            if (row == 1 || row == n || col == 1 || col == m) {
                cout << "* ";
            } 
            else {
                cout << "  ";   // do spaces for alignment
            }
        }

        cout << endl;
    }

    return 0;
}