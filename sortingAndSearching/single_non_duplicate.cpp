#include <iostream>
#include <vector>
using namespace std;

int singleNonDuplicate(vector<int>& nums)
{
    int start = 0;
    int end = nums.size() - 1;

    while(start < end)
    {
        int mid = start + (end - start) / 2;

        if(mid % 2 == 1)
            mid--;

        if(nums[mid] == nums[mid + 1])
        {
            start = mid + 2;
        }
        else
        {
            end = mid;
        }
    }

    return nums[start];
}

int main()
{
    vector<int> nums = {1,1,2,2,3,4,4,5,5};

    cout << "Single Element = " << singleNonDuplicate(nums);

    return 0;
}