#include <iostream>
using namespace std;

class Solution {
public:
    string checkNumberSign(int num) {
        if (num > 0) {
            return "Positive";
        } 
        else if (num < 0) {
            return "Negative";
        } 
        else {
            return "Zero";
        }
    }
};

int main() {
    Solution obj;
    int num;

    cout << "Enter a number: ";
    cin >> num;

    cout << obj.checkNumberSign(num);

    return 0;
}