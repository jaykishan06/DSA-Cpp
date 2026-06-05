#include <iostream>
using namespace std;

int countDivisors(int num) {

    int count = 0;

    for(int i = 1; i <= num; i++) {

        if(num % i == 0) {
            count++;
        }
    }

    return count;
}

int main() {

    int num;
    cin >> num;

    cout << countDivisors(num);

    return 0;
}