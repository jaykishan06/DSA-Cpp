#include <iostream>
#include <vector>
using namespace std;

int findSmallest(vector<int>& arr) {

    int smallest = arr[0];

    for(int i = 1; i < arr.size(); i++) {

        if(arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    return smallest;
}

int main() {

    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << findSmallest(arr);

    return 0;
}