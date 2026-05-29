#include <iostream>
using namespace std;

string isPrime(int num) {

    if(num <= 1) {
        return "False";
    }

    for(int i = 2; i * i <= num; i++) {
        if(num % i == 0) {
            return "False";
        }
    }

    return "True";
}

int main() {

    int num;
    cin >> num;

    cout << isPrime(num);

    return 0;
}