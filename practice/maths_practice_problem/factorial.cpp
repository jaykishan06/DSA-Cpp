#include <iostream>
using namespace std;

unsigned long long factorial(int num) {

    unsigned long long fact = 1;

    for(int i = 1; i <= num; i++) {
        fact *= i;
    }

    return fact;
}

int main() {

    int num;
    cin >> num;

    cout << factorial(num);

    return 0;
}