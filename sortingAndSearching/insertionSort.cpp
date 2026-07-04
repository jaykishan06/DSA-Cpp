#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int>& arr) {

    int n = arr.size();

    // Start from second element
    for(int i = 1; i < n; i++) {

        int key = arr[i];
        int j = i - 1;

        // Shift larger elements to the right
        while(j >= 0 && arr[j] > key) {

            arr[j + 1] = arr[j];
            j--;
        }

        // Insert key at correct position
        arr[j + 1] = key;
    }
}

int main() {

    int n;

    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter array elements: ";

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    insertionSort(arr);

    cout << "Sorted Array: ";

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}