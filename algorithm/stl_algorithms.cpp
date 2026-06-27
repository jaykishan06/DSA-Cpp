#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// for_each()
void print(int x) {
	cout << x << " ";
}

// find_if() & count_if()
bool isEven(int x) {
	return x % 2 == 0;
}

int main() {

	vector<int> v = {5, 2, 8, 1, 4, 2, 8};

	// ==========================
	// Original Vector
	// ==========================
	cout << "Original Vector: ";
	for(int x : v)
		cout << x << " ";
	cout << endl << endl;

	// ==========================
	// for_each()
	// ==========================
	cout << "for_each(): ";
	for_each(v.begin(), v.end(), print);
	cout << endl << endl;

	// ==========================
	// find()
	// ==========================
	auto it = find(v.begin(), v.end(), 8);

	if(it != v.end())
		cout << "find(): 8 Found" << endl;
	else
		cout << "find(): Not Found" << endl;

	// ==========================
	// find_if()
	// ==========================
	auto it2 = find_if(v.begin(), v.end(), isEven);

	if(it2 != v.end())
		cout << "find_if(): First Even = " << *it2 << endl;

	// ==========================
	// count()
	// ==========================
	cout << "count(8): "
		 << count(v.begin(), v.end(), 8) << endl;

	// ==========================
	// count_if()
	// ==========================
	cout << "count_if(Even): "
		 << count_if(v.begin(), v.end(), isEven) << endl;

	cout << endl;

	// ==========================
	// sort()
	// ==========================
	sort(v.begin(), v.end());

	cout << "sort(): ";
	for(int x : v)
		cout << x << " ";
	cout << endl;

	// ==========================
	// reverse()
	// ==========================
	reverse(v.begin(), v.end());

	cout << "reverse(): ";
	for(int x : v)
		cout << x << " ";
	cout << endl;

	// ==========================
	// rotate()
	// ==========================
	rotate(v.begin(), v.begin() + 2, v.end());

	cout << "rotate(): ";
	for(int x : v)
		cout << x << " ";
	cout << endl;

	// ==========================
	// unique()
	// ==========================
	sort(v.begin(), v.end());

	auto last = unique(v.begin(), v.end());

	v.erase(last, v.end());

	cout << "unique(): ";
	for(int x : v)
		cout << x << " ";
	cout << endl;

	// ==========================
	// partition()
	// ==========================
	vector<int> p = {1,2,3,4,5,6,7,8};

	partition(p.begin(), p.end(), isEven);

	cout << "partition(): ";
	for(int x : p)
		cout << x << " ";
	cout << endl;

	return 0;
}

// Original Vector: 5 2 8 1 4 2 8

// for_each(): 5 2 8 1 4 2 8

// find(): 8 Found
// find_if(): First Even = 2
// count(8): 2
// count_if(Even): 4

// sort(): 1 2 2 4 5 8 8
// reverse(): 8 8 5 4 2 2 1
// rotate(): 5 4 2 2 1 8 8
// unique(): 1 2 4 5 8
// partition(): 8 2 6 4 5 3 7 1