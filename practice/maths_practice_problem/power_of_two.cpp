#include <iostream>
using namespace std;

string isPowerOfTwo(int num) {

    if(num > 0 && (num & (num - 1)) == 0) {
        return "true";
    }

    return "false";
}

int main() {

    int num;
    cin >> num;

    cout << isPowerOfTwo(num);

    return 0;
}