#include <iostream>
using namespace std;

string checkEvenOdd(int num) {

    if(num % 2 == 0) {
        return "Even";
    }
    else {
        return "Odd";
    }
}

int main() {

    int num;
    cin >> num;

    cout <<checkEvenOdd(num);

    return 0;
}