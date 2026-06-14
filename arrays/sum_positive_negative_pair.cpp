#include <iostream>
#include <vector>
using namespace std;

pair<int, int> sumPositiveNegative(vector<int>& arr) {

    int positiveSum = 0;
    int negativeSum = 0;

    for(int i = 0; i < arr.size(); i++) {

        if(arr[i] >= 0) {
            positiveSum += arr[i];
        }
        else {
            negativeSum += arr[i];
        }
    }

    return {positiveSum, negativeSum};
}

int main() {

    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    pair<int, int> result = sumPositiveNegative(arr);

    cout << "Positive Sum = " << result.first << endl;
    cout << "Negative Sum = " << result.second;

    return 0;
}