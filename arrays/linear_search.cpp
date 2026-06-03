// Problem: Linear Search in Array
// Concept: Array Traversal

#include <iostream>
#include <vector>
using namespace std;

int searchElementInArray(vector<int>& nums, int target) {

    // size assign karne ke liye
    int size = nums.size();

    // array traverse karne ke liye
    for(int i = 0; i < size; i++) {

        // target mil gaya to index return karo
        if(target == nums[i]) {
            return i;
        }
    }

    // target nahi mila
    return -1;
}

int main() {

    int n;
    cin >> n;

    vector<int> nums(n);

    // array input lo
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int target;
    cin >> target;

    cout << searchElementInArray(nums, target);

    return 0;
}