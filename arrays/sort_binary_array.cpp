#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> sortArray(vector<int>& nums) {

    vector<int> arr = nums;

    // total zeros count karo
    int totalZeros = 0;

    for(int i = 0; i < arr.size(); i++) {

        if(arr[i] == 0) {
            totalZeros++;
        }
    }

    // zeros fill karo
    fill(arr.begin(), arr.begin() + totalZeros, 0);

    // ones fill karo
    fill(arr.begin() + totalZeros, arr.end(), 1);

    return arr;
}

int main() {

    int n;
    cin >> n;

    vector<int> nums(n);

    // array input lo
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> result = sortArray(nums);

    // sorted array print karo
    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}