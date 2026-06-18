#include <iostream>
#include <vector>
using namespace std;

int findFirstUnsortedIndex(const vector<int>& arr) {

    int n = arr.size();

    for(int i = 0; i < n - 1; i++) {

        if(arr[i] > arr[i + 1]) {
            return i;
        }
    }

    return -1;
}

int main() {

    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << findFirstUnsortedIndex(arr);

    return 0;
}