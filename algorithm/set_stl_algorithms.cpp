#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    vector<int> v1 = {1, 2, 3, 4, 5};
    vector<int> v2 = {3, 4, 5, 6, 7};

    vector<int> result(10);

    // ==========================
    // Original Vectors
    // ==========================
    cout << "Vector 1: ";
    for(int x : v1)
        cout << x << " ";
    cout << endl;

    cout << "Vector 2: ";
    for(int x : v2)
        cout << x << " ";
    cout << endl << endl;

    // ==========================
    // set_union()
    // ==========================
    auto it = set_union(v1.begin(), v1.end(),
                        v2.begin(), v2.end(),
                        result.begin());

    cout << "set_union(): ";
    for(auto i = result.begin(); i != it; i++)
        cout << *i << " ";
    cout << endl;

    // ==========================
    // set_intersection()
    // ==========================
    it = set_intersection(v1.begin(), v1.end(),
                          v2.begin(), v2.end(),
                          result.begin());

    cout << "set_intersection(): ";
    for(auto i = result.begin(); i != it; i++)
        cout << *i << " ";
    cout << endl;

    // ==========================
    // set_difference()
    // ==========================
    it = set_difference(v1.begin(), v1.end(),
                        v2.begin(), v2.end(),
                        result.begin());

    cout << "set_difference(v1-v2): ";
    for(auto i = result.begin(); i != it; i++)
        cout << *i << " ";
    cout << endl;

    // ==========================
    // set_symmetric_difference()
    // ==========================
    it = set_symmetric_difference(v1.begin(), v1.end(),
                                  v2.begin(), v2.end(),
                                  result.begin());

    cout << "set_symmetric_difference(): ";
    for(auto i = result.begin(); i != it; i++)
        cout << *i << " ";
    cout << endl;

    return 0;
}