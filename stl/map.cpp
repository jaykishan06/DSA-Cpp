#include <iostream>
#include <map>
using namespace std;

int main() {

    // 1. Create Map
    map<int, string> m;

    // 2. insert()
    m.insert({1, "One"});
    m.insert({2, "Two"});

    // 3. operator[]
    m[3] = "Three";
    m[4] = "Four";

    // Duplicate key (updates value)
    m[2] = "TWO";

    // 4. Traversal
    cout << "Elements:" << endl;
    for(auto x : m) {
        cout << x.first << " -> " << x.second << endl;
    }

    // 5. size()
    cout << "Size: " << m.size() << endl;

    // 6. empty()
    cout << "Empty? " << m.empty() << endl;

    // 7. find()
    if(m.find(3) != m.end()) {
        cout << "Key 3 Found" << endl;
    }
    else {
        cout << "Key 3 Not Found" << endl;
    }

    // 8. count()
    cout << "Count of key 2: " << m.count(2) << endl;

    // 9. erase()
    m.erase(2);

    cout << "After Erase:" << endl;
    for(auto x : m) {
        cout << x.first << " -> " << x.second << endl;
    }

    // 10. begin()
    cout << "First Key: " << m.begin()->first << endl;

    // 11. rbegin()
    cout << "Last Key: " << m.rbegin()->first << endl;

    // 12. clear()
    m.clear();

    cout << "Size after clear: " << m.size() << endl;

    return 0;
}
