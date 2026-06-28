#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    vector<int> v = {10, 20, 30, 30, 30, 40, 50};

    cout << "Vector: ";
    for(int x : v)
        cout << x << " ";
    cout << endl << endl;

    // ==========================
    // binary_search()
    // ==========================
    cout << "binary_search(30): "
         << binary_search(v.begin(), v.end(), 30) << endl;

    cout << "binary_search(35): "
         << binary_search(v.begin(), v.end(), 35) << endl;

    cout << endl;

    // ==========================
    // lower_bound()
    // ==========================
    auto lb = lower_bound(v.begin(), v.end(), 30);

    cout << "lower_bound(30): Index = "
         << lb - v.begin()
         << " Value = " << *lb << endl;

    auto lb2 = lower_bound(v.begin(), v.end(), 35);

    cout << "lower_bound(35): Index = "
         << lb2 - v.begin()
         << " Value = " << *lb2 << endl;

    cout << endl;

    // ==========================
    // upper_bound()
    // ==========================
    auto ub = upper_bound(v.begin(), v.end(), 30);

    cout << "upper_bound(30): Index = "
         << ub - v.begin()
         << " Value = " << *ub << endl;

    cout << endl;

    // ==========================
    // equal_range()
    // ==========================
    auto range = equal_range(v.begin(), v.end(), 30);

    cout << "equal_range(30):" << endl;

    cout << "First Index : "
         << range.first - v.begin() << endl;

    cout << "Last Index  : "
         << range.second - v.begin() - 1 << endl;

    return 0;
}