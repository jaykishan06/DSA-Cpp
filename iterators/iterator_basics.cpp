#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> v = {10, 20, 30, 40, 50};

    // Create Iterator
    vector<int>::iterator it;

    // Point to first element
    it = v.begin();

    while(it != v.end()) {
        cout << *it << " ";
        it++;
    }

    return 0;
}