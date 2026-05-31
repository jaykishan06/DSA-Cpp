// Problem: Hollow Diamond Pattern
// Concept: Nested Loop Pattern
#include<iostream>
using namespace std;
class Solution {
public:
	void printHollowDiamond(int n) {

		// upper part ke liye
		for (int row = 1; row <= n; row++) {

			// starting spaces
			for (int space = 1; space <= n - row; space++) {
				cout << " ";
			}

			// stars aur inner spaces
			for (int col = 1; col <= (2 * row) - 1; col++) {

				// first aur last position par star
				if (col == 1 || col == (2 * row) - 1) {
					cout << "*";
				}
				else {
					cout << " ";
				}
			}

			cout << endl;
		}

		// lower part ke liye
		for (int row = n - 1; row >= 1; row--) {

			// starting spaces
			for (int space = 1; space <= n - row; space++) {
				cout << " ";
			}

			// stars aur inner spaces
			for (int col = 1; col <= (2 * row) - 1; col++) {

				// first aur last position par star
				if (col == 1 || col == (2 * row) - 1) {
					cout << "*";
				}
				else {
					cout << " ";
				}
			}

			cout << endl;
		}
	}
};

int main()
{
	Solution obj;
	int n;
	cin>>n;
	 obj.printHollowDiamond(n);
	 return 0;
}