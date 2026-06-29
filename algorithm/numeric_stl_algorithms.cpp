#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main() {

    vector<int> v = {1, 2, 3, 4, 5};

    // ==========================
    // Original Vector
    // ==========================
    cout << "Original Vector: ";
    for(int x : v)
        cout << x << " ";
    cout << endl << endl;

    // ==========================
    // accumulate()
    // ==========================
    int sum = accumulate(v.begin(), v.end(), 0);

    cout << "accumulate(): " << sum << endl << endl;

    // ==========================
    // inner_product()
    // ==========================
    vector<int> v2 = {5, 4, 3, 2, 1};

    int product = inner_product(v.begin(), v.end(), v2.begin(), 0);

    cout << "inner_product(): " << product << endl << endl;

    // ==========================
    // partial_sum()
    // ==========================
    vector<int> prefix(v.size());

    partial_sum(v.begin(), v.end(), prefix.begin());

    cout << "partial_sum(): ";

    for(int x : prefix)
        cout << x << " ";

    cout << endl << endl;

    // ==========================
    // iota()
    // ==========================
    vector<int> arr(5);

    iota(arr.begin(), arr.end(), 10);

    cout << "iota(): ";

    for(int x : arr)
        cout << x << " ";

    cout << endl;

    return 0;
}