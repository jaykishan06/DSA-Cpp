#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    // rows ke liye loop
    for (int row = 1; row <= n; row++) {

        // columns ke liye loop
        for (int col = 1; col <= m; col++) {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}