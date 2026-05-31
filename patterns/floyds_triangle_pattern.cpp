// Problem: Floyd's Triangle Pattern
// Concept: Nested Loop + Incrementing Number

#include <iostream>
using namespace std;

class Solution {
public:
    void printFloydsTriangle(int n) {

        // number store karne ke liye
        int num = 1;

        // rows print karne ke liye
        for(int row = 1; row <= n; row++) {

            // har row me columns print karne ke liye
            for(int col = 1; col <= row; col++) {

                // current number print karo
                cout << num << " ";

                // next number ke liye increment
                num++;
            }

            // next line
            cout << endl;
        }
    }
};

int main() {
    Solution s;

    int n;
    cin >> n;

    s.printFloydsTriangle(n);

    return 0;
}