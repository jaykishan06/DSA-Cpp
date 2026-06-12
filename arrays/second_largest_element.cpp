#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int findSecondLargest(vector<int>& arr) {

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for(int i = 0; i < arr.size(); i++) {

        if(arr[i] > largest) {

            secondLargest = largest;
            largest = arr[i];
        }

        else if(arr[i] > secondLargest &&
                arr[i] != largest) {

            secondLargest = arr[i];
        }
    }

    return secondLargest;
}

int main() {

    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << findSecondLargest(arr);

    return 0;
}