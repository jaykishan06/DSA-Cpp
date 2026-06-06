#include <iostream>
#include <vector>
using namespace std;

vector<int> reverseArray(const vector<int>& arr) {

    // arr ki copy create karo
    vector<int> num = arr;

    int i = 0;
    int j = num.size() - 1;

    // reverse karne ke liye swap karo
    while(i < j) {

        swap(num[i], num[j]);

        i++;
        j--;
    }

    return num;
}

int main() {

    int n;
    cin >> n;

    vector<int> arr(n);

    // array input lo
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> result = reverseArray(arr);

    // reversed array print karo
    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}