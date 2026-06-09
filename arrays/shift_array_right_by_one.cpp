#include <iostream>
#include <vector>
using namespace std;

vector<int> shiftRight(vector<int>& arr) {

    int n = arr.size();

    vector<int> arr2 = arr;

    int lastElement = arr2[n - 1];

    for(int i = n - 1; i > 0; i--) {
        arr2[i] = arr2[i - 1];
    }

    arr2[0] = lastElement;

    return arr2;
}

int main() {

    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> result = shiftRight(arr);

    for(int x : result) {
        cout << x << " ";
    }

    return 0;
}