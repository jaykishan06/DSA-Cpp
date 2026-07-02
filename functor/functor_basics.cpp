// basic functors
#include <iostream>
using namespace std;

class Greet {
public:
	void operator()() {
		cout << "Hello, Welcome to Functors!";
	}
};

int main() {

	Greet obj;

	obj();    // Calling object like a function

	return 0;
}

//funnctor with para meter
// //#include <iostream>
// using namespace std;

// class Square {
// public:
//     int operator()(int x) {
//         return x * x;
//     }
// };

// int main() {

//     Square sq;

//     cout << "Square = " << sq(5);

//     return 0;
// }


//jackkkkkkkkkkkkkk
//greater int
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main() {

//     vector<int> v = {5, 2, 8, 1, 4};

//     sort(v.begin(), v.end(), greater<int>());

//     cout << "Descending Order: ";

//     for(int x : v) {
//         cout << x << " ";
//     }

//     return 0;
// }