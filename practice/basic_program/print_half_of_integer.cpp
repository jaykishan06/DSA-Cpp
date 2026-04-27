#include <iostream>
using namespace std;

// Problem: Print Half of an Integer
// Concept: Arithmetic Division

int main() {
    int num;
    cin >> num;

    double result = num / 2.0;   // ensures decimal for odd numbers
    cout << result << endl;

    return 0;
}