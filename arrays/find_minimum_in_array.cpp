// Problem: Find Minimum Element in Array
// Concept: Array Traversal

#include <iostream>
#include <vector>
using namespace std;

int findMinimum(vector<int>& arr) {

    int minNum = arr[0];

    for(int i = 1; i < arr.size(); i++) {

        if(arr[i] < minNum) {
            minNum = arr[i];
        }
    }

    return minNum;
}

int main() {

    int n;
    cin >> n;

    vector<int> arr(n);

    // array input lo
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << findMinimum(arr);

    return 0;
}