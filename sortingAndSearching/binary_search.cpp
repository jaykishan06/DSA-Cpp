#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int>& arr, int target)
{
    int start = 0;
    int end = arr.size() - 1;

    while(start <= end)
    {
        int mid = start + (end - start) / 2;

        if(arr[mid] == target)
        {
            return mid;
        }
        else if(arr[mid] < target)
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
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter sorted array elements: ";

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int target;

    cout << "Enter element to search: ";
    cin >> target;

    int ans = binarySearch(arr, target);

    if(ans == -1)
    {
        cout << "Element Not Found";
    }
    else
    {
        cout << "Element Found at Index: " << ans;
    }

    return 0;
}