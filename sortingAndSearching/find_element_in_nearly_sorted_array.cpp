#include <iostream>
#include <vector>
using namespace std;

int findElementInNearlySortedArray(vector<int>& arr, int k)
{
    int start = 0;
    int end = arr.size() - 1;

    while(start <= end)
    {
        int mid = start + (end - start) / 2;

        if(arr[mid] == k)
            return mid;

        if(mid - 1 >= start && arr[mid - 1] == k)
            return mid - 1;

        if(mid + 1 <= end && arr[mid + 1] == k)
            return mid + 1;

        if(arr[mid] < k)
            start = mid + 2;
        else
            end = mid - 2;
    }

    return -1;
}

int main()
{
    vector<int> arr = {5,10,30,20,40};

    int k = 20;

    cout << "Index = " << findElementInNearlySortedArray(arr, k);

    return 0;
}