#include <iostream>
#include <vector>
using namespace std;

int findMaximum(vector<int>& arr) {

    int maximum = arr[0];

    for(int i = 1; i < arr.size(); i++) {

        if(arr[i] > maximum) {
            maximum = arr[i];
        }
    }

    return maximum;
}

int main() {

    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << findMaximum(arr);

    return 0;
}