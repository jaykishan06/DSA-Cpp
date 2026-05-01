#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = n; i >= 1; i--) {
        cout << i;
        if (i > 1) cout << " ";   // avoid extra space
    }

    return 0;
}