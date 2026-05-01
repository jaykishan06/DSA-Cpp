#include <iostream>
using namespace std;

int main() {
    int num, n;
    cin >> num >> n;

    for (int i = 1; i <= n; i++) {
        cout << num;
        if (i < n) cout << " ";
    }

    return 0;
}