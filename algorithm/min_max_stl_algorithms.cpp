#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    vector<int> v = {45, 12, 78, 34, 90, 23};

    // ==========================
    // Original Vector
    // ==========================
    cout << "Original Vector: ";
    for(int x : v)
        cout << x << " ";
    cout << endl << endl;

    // ==========================
    // min()
    // ==========================
    int a = 15;
    int b = 30;

    cout << "min(" << a << ", " << b << ") = "
         << min(a, b) << endl;

    // ==========================
    // max()
    // ==========================
    cout << "max(" << a << ", " << b << ") = "
         << max(a, b) << endl << endl;

    // ==========================
    // min_element()
    // ==========================
    auto minIt = min_element(v.begin(), v.end());

    cout << "Minimum Element = "
         << *minIt << endl;

    cout << "Minimum Element Index = "
         << minIt - v.begin() << endl << endl;

    // ==========================
    // max_element()
    // ==========================
    auto maxIt = max_element(v.begin(), v.end());

    cout << "Maximum Element = "
         << *maxIt << endl;

    cout << "Maximum Element Index = "
         << maxIt - v.begin() << endl;

    return 0;
}