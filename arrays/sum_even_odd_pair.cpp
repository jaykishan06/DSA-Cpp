#include <iostream>
#include <vector>
using namespace std;

pair<int, int> sumEvenOdd(vector<int>& arr) {

    int evenSum = 0;
    int oddSum = 0;

    for(int i = 0; i < arr.size(); i++) {

        if(arr[i] % 2 == 0) {
            evenSum += arr[i];
        }
        else {
            oddSum += arr[i];
        }
    }

    return {evenSum, oddSum};
}

int main() {

    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    pair<int, int> result = sumEvenOdd(arr);

    cout << "Even Sum = " << result.first << endl;
    cout << "Odd Sum = " << result.second;

    return 0;
}