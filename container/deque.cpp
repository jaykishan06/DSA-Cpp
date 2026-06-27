#include <iostream>
#include <deque>
using namespace std;

int main() {

	// 1. Create Deque
	deque<int> dq;

	// 2. push_back()
	dq.push_back(20);
	dq.push_back(30);

	// 3. push_front()
	dq.push_front(10);

	// Deque: 10 20 30

	// 4. front()
	cout << "Front: " << dq.front() << endl;

	// 5. back()
	cout << "Back: " << dq.back() << endl;

	// 6. size()
	cout << "Size: " << dq.size() << endl;

	// 7. at()
	cout << "Element at index 1: " << dq.at(1) << endl;

	// 8. pop_front()
	dq.pop_front();

	// Deque: 20 30

	// 9. pop_back()
	dq.pop_back();

	// Deque: 20

	// 10. insert()
	dq.push_front(10);
	dq.push_back(30);

	auto it = dq.begin();
	++it;
	dq.insert(it, 15);

	// Deque: 10 15 20 30

	// 11. erase()
	it = dq.begin();
	++it;
	dq.erase(it);

	// Deque: 10 20 30

	// 12. Traversal
	cout << "Elements: ";
	for(int x : dq) {
		cout << x << " ";
	}
	cout << endl;

	// 13. empty()
	cout << "Empty? " << dq.empty() << endl;

	// 14. clear()
	dq.clear();

	cout << "Size after clear: " << dq.size() << endl;

	return 0;
}


//Front: 10
// Back: 30
// Size: 3
// Element at index 1: 20
// Elements: 10 20 30
// Empty? 0
// Size after clear: 0