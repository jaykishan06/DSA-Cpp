#include <iostream>
#include <vector>
using namespace std;

int findPeakElement(vector<int>& nums)
{
    int start = 0;
    int end = nums.size() - 1;

    while(start < end)
    {
        int mid = start + (end - start) / 2;

        if(nums[mid] < nums[mid + 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
    }

    return start;
}

int main()
{
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter array elements: ";

    for(int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int index = findPeakElement(nums);

    cout << "Peak Element Index: " << index << endl;
    cout << "Peak Element Value: " << nums[index];

    return 0;
}