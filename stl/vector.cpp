#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    // 1. Create Vector
    vector<int> v;

    // 2. push_back()
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    // 3. size()
    cout << "Size: " << v.size() << endl;

    // 4. front() and back()
    cout << "Front: " << v.front() << endl;
    cout << "Back: " << v.back() << endl;

    // 5. at()
    cout << "Element at index 1: " << v.at(1) << endl;

    // 6. Iteration
    cout << "Elements: ";
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    // 7. pop_back()
    v.pop_back();

    // 8. insert()
    v.insert(v.begin() + 1, 15);

    // 9. erase()
    v.erase(v.begin());

    // 10. sort()
    sort(v.begin(), v.end());

    // 11. reverse()
    reverse(v.begin(), v.end());

    // 12. find()
    auto it = find(v.begin(), v.end(), 15);
    if(it != v.end()) {
        cout << "15 Found" << endl;
    }

    // 13. count()
    cout << "Count of 15: "
         << count(v.begin(), v.end(), 15) << endl;

    // 14. max_element()
    cout << "Max: "
         << *max_element(v.begin(), v.end()) << endl;

    // 15. min_element()
    cout << "Min: "
         << *min_element(v.begin(), v.end()) << endl;

    // 16. empty()
    cout << "Empty? " << v.empty() << endl;

    // 17. clear()
    v.clear();

    cout << "Size after clear: "
         << v.size() << endl;

    return 0;
}