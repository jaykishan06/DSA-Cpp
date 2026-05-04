#include <iostream>
using namespace std;

int main() {
    int P, R, T;
    cin >> P >> R >> T;

    // SI formula apply
    int SI = (P * R * T) / 100;

    cout << SI << endl;

    return 0;
}