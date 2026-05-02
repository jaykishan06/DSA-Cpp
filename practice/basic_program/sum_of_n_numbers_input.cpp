#include <iostream>
using namespace std;

// Problem: Sum of N Numbers (taking input)
// Concept: Loop + Input Handling

int main() {
    int n;
    cin >> n;

    int sum = 0;
    int num;

    for (int i = 0; i < n; i++) {
        cin >> num;     // read each number
        sum += num;     // add to sum
    }

    cout << sum << endl;

    return 0;
}