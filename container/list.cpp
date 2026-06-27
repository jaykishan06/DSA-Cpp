#include <iostream>
#include <list>
using namespace std;

int main() {

	// 1. Create List
	list<int> l;

	// 2. push_back()
	l.push_back(10);
	l.push_back(20);
	l.push_back(30);

	// 3. push_front()
	l.push_front(5);

	// 4. front() and back()
	cout << "Front: " << l.front() << endl;
	cout << "Back: " << l.back() << endl;

	// 5. size()
	cout << "Size: " << l.size() << endl;

	// 6. Traversal
	cout << "Elements: ";
	for(int x : l) {
		cout << x << " ";
	}
	cout << endl;
	//or
	list<int>::iterator it = l.begin();
	while ( it!=l.end())
	{
		cout<<*it<<endl;
		it++;
	}

	// 7. pop_front()
	l.pop_front();

	// 8. pop_back()
	l.pop_back();

	// 9. insert()
	auto it = l.begin();
	++it;
	l.insert(it, 15);

	// 10. erase()
	it = l.begin();
	++it;
	l.erase(it);

	// 11. remove()
	l.remove(20);

	// 12. reverse()
	l.reverse();

	// 13. sort()
	l.sort();

	// 14. empty()
	cout << "Empty? " << l.empty() << endl;

	// 15. clear()
	l.clear();

	cout << "Size after clear: " << l.size() << endl;

	return 0;
}