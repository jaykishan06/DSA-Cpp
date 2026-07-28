#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findPairs(vector<int>& nums, int k)
{
    if(k < 0)
        return 0;

    sort(nums.begin(), nums.end());

    int i = 0;
    int j = 1;
    int count = 0;

    while(j < nums.size())
    {
        if(i == j)
        {
            j++;
            continue;
        }

        int diff = nums[j] - nums[i];

        if(diff == k)
        {
            count++;

            int left = nums[i];
            int right = nums[j];

            while(i < nums.size() && nums[i] == left)
                i++;

            while(j < nums.size() && nums[j] == right)
                j++;
        }
        else if(diff < k)
        {
            j++;
        }
        else
        {
            i++;
        }
    }

    return count;
}

int main()
{
    vector<int> nums = {3,1,4,1,5};
    int k = 2;

    cout << "Unique Pairs = " << findPairs(nums, k);

    return 0;
}