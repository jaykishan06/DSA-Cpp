#include <iostream>
#include <vector>
using namespace std;

// Binary search approach - O(log n)
int findPeakElement(vector<int>& nums) {
    int left = 0, right = nums.size() - 1;

    while (left < right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] < nums[mid + 1]) {
            // Upward slope -> peak lies on the right side
            left = mid + 1;
        } else {
            // Downward slope -> peak lies on the left side (mid included)
            right = mid;
        }
    }

    return left; // left == right, pointing to a peak
}

int main() {
    vector<int> test1 = {1, 2, 3, 1};
    vector<int> test2 = {1, 2, 1, 3, 5, 6, 4};
    vector<int> test3 = {1};
    vector<int> test4 = {1, 2};
    vector<int> test5 = {2, 1};

    cout << "Test 1: index " << findPeakElement(test1) << " (expected 2)\n";
    cout << "Test 2: index " << findPeakElement(test2) << " (expected 1 or 5)\n";
    cout << "Test 3: index " << findPeakElement(test3) << " (expected 0)\n";
    cout << "Test 4: index " << findPeakElement(test4) << " (expected 1)\n";
    cout << "Test 5: index " << findPeakElement(test5) << " (expected 0)\n";

    return 0;
}