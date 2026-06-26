#include <iostream>
#include <set>
using namespace std;

int main() {

    // 1. Create Set
    set<int> s;

    // 2. insert()
    s.insert(30);
    s.insert(10);
    s.insert(20);
    s.insert(50);
    s.insert(40);

    // Duplicate element
    s.insert(20);

    // 3. Traversal
    cout << "Elements: ";
    for(int x : s) {
        cout << x << " ";
    }
    cout << endl;

    // 4. size()
    cout << "Size: " << s.size() << endl;

    // 5. empty()
    cout << "Empty? " << s.empty() << endl;

    // 6. find()
    if(s.find(30) != s.end()) {
        cout << "30 Found" << endl;
    }
    else {
        cout << "30 Not Found" << endl;
    }

    // 7. count()
    cout << "Count of 20: " << s.count(20) << endl;

    // 8. erase()
    s.erase(20);

    cout << "After Erase: ";
    for(int x : s) {
        cout << x << " ";
    }
    cout << endl;

    // 9. begin()
    cout << "First Element: " << *s.begin() << endl;

    // 10. rbegin()
    cout << "Last Element: " << *s.rbegin() << endl;

    // 11. clear()
    s.clear();

    cout << "Size after clear: " << s.size() << endl;

    return 0;
}