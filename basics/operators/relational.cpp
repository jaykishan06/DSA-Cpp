//Relational operators are used to compare two values and return a boolean result (true or false).

#include<iostream>
using namespace std;

int main() {
	
	int a = 10;
	int b = 20;

	cout << "a == b : " << (a == b) << endl;   // check if a is equal to b
	cout << "a != b : " << (a != b) << endl;   // check if a is not equal to b
	cout << "a > b  : " << (a > b) << endl;    // check if a is greater than b
	cout << "a < b  : " << (a < b) << endl;    // check if a is less than b
	cout << "a >= b : " << (a >= b) << endl;   // check if a is greater than or equal to b
	cout << "a <= b : " << (a <= b) << endl;   // check if a is less than or equal to b

	return 0;
}