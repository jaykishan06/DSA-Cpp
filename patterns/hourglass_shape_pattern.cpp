// Problem: Hourglass Shape Pattern
// Concept: Nested Loop Pattern

#include <iostream>
using namespace std;

class Solution {
public:
	void printHourglass(int n) {

		// upper half print karne ke liye
		for(int row = n; row >= 1; row--) {

			// starting spaces print karne ke liye
			for(int space = 1; space <= n - row; space++) {
				cout << " ";
			}

			// stars print karne ke liye
			for(int col = 1; col <= 2 * row; col++) {
				cout << "*";
			}

			cout << endl;
		}

		// lower half print karne ke liye
		for(int row = 2; row <= n; row++) {

			// starting spaces
			for(int space = 1; space <= n - row; space++) {
				cout << " ";
			}

			// stars
			for(int col = 1; col <= 2 * row; col++) {
				cout << "*";
			}

			cout << endl;
		}
	}
};

int main() {

	int n;
	cin >> n;

	Solution s;
	s.printHourglass(n);

	return 0;
}
