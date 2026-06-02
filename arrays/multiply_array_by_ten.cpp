#include <iostream>
#include <vector>
using namespace std;

vector<int> multiplyByTen(vector<int>& arr) {

    int size = arr.size();

    for(int i = 0; i < size; i++) {
        arr[i] = arr[i] * 10;
    }

    return arr;
}

int main() {

    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> result = multiplyByTen(arr);

    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}