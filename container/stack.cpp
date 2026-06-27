#include <iostream>
#include <stack>
using namespace std;

int main() {

    // 1. Create Stack
    stack<int> s;

    // 2. push()
    s.push(10);
    s.push(20);
    s.push(30);

    // 3. top()
    cout << "Top: " << s.top() << endl;

    // 4. size()
    cout << "Size: " << s.size() << endl;

    // 5. pop()
    s.pop();

    cout << "Top after pop: "
         << s.top() << endl;

    // 6. empty()
    cout << "Empty? "
         << s.empty() << endl;

    // 7. Traversal
    cout << "Elements: ";

    while(!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}