#include <iostream>
#include <vector>
using namespace std;

int findUniqueElement(vector<int>& nums) {

    int ans = 0;

    for(int i = 0; i < nums.size(); i++) {
        ans = ans ^ nums[i];
    }

    return ans;
}

int main() {

    int n;
    cin >> n;

    vector<int> nums(n);

    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << findUniqueElement(nums);

    return 0;
}