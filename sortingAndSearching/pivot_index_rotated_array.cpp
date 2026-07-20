#include <iostream>
#include <vector>
using namespace std;

int findPivotIndex(vector<int>& nums)
{
    int start = 0;
    int end = nums.size() - 1;

    while(start <= end)
    {
        int mid = start + (end - start) / 2;

        if(mid < end && nums[mid] > nums[mid + 1])
        {
            return mid;
        }

        if(nums[mid] >= nums[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return -1;
}

int main()
{
    vector<int> nums = {4,5,6,7,0,1,2};

    cout << "Pivot Index = " << findPivotIndex(nums);

    return 0;
}