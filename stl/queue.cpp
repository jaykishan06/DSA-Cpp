#include <iostream>
#include <queue>
using namespace std;

int main() {

    // 1. Create Queue
    queue<int> q;

    // 2. push()
    q.push(10);
    q.push(20);
    q.push(30);

    // 3. front()
    cout << "Front: " << q.front() << endl;

    // 4. back()
    cout << "Back: " << q.back() << endl;

    // 5. size()
    cout << "Size: " << q.size() << endl;

    // 6. pop()
    q.pop();

    cout << "Front after pop: "
         << q.front() << endl;

    // 7. empty()
    cout << "Empty? "
         << q.empty() << endl;

    // 8. Traversal
    cout << "Elements: ";

    while(!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}