#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // 1 se n tak loop
    for (int i = 1; i <= n; i++) {

        // even check
        if (i % 2 == 0) {

            cout << i;

            // extra space avoid
            if (i + 2 <= n) cout << " ";
        }
    }

    return 0;
