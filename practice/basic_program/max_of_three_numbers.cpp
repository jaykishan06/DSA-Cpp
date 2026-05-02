#include <iostream>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;

    // assume a is max
    double maxVal = a;

    if (b > maxVal) {
        maxVal = b;
    }

    if (c > maxVal) {
        maxVal = c;
    }

    cout << maxVal << endl;

    return 0;
}