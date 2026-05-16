
// Problem: Spiral Matrix Pattern
// Concept: Spiral Traversal using Boundaries

#include <iostream>
using namespace std;

class Solution {
public:
    void printSpiral(int n) {

        // array create karo
        int arr[100][100];

        // boundaries define karo
        int top = 0;
        int bottom = n - 1;
        int left = 0;
        int right = n - 1;

        int num = 1;

        // spiral pattern fill karne ke liye
        while(top <= bottom && left <= right) {

            // left -> right
            for(int col = left; col <= right; col++) {
                arr[top][col] = num++;
            }
            top++;

            // top -> bottom
            for(int row = top; row <= bottom; row++) {
                arr[row][right] = num++;
            }
            right--;

            // right -> left
            if(top <= bottom) {
                for(int col = right; col >= left; col--) {
                    arr[bottom][col] = num++;
                }
                bottom--;
            }

            // bottom -> top
            if(left <= right) {
                for(int row = bottom; row >= top; row--) {
                    arr[row][left] = num++;
                }
                left++;
            }
        }

        // spiral matrix print karo
        for(int row = 0; row < n; row++) {
            for(int col = 0; col < n; col++) {
                cout << arr[row][col] << " ";
            }

            // last row ke baad extra line avoid karo
            if(row != n - 1) {
                cout << endl;
            }
        }
    }
};

int main() {

    int n;
    cin >> n;

    Solution s;
    s.printSpiral(n);

    return 0;
}