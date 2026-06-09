#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<int>& nums, int k) {

    int n = nums.size();

    k = k % n;

    // step 1: last k elements temp me store karo
    vector<int> temp;

    for(int i = n - k; i <= n - 1; i++) {
        temp.push_back(nums[i]);
    }

    // step 2: remaining elements ko right shift karo
    for(int i = n - 1; i >= k; i--) {
        nums[i] = nums[i - k];
    }

    // step 3: temp ke elements start me copy karo
    for(int i = 0; i < k; i++) {
        nums[i] = temp[i];
    }
}

int main() {

    int n;
    cin >> n;

    vector<int> nums(n);

    // array input lo
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int k;
    cin >> k;

    rotate(nums, k);

    // rotated array print karo
    for(int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }

    return 0;
}