// leetcode 852
#include <iostream>
using namespace std;

int peakIndexInMountainArray(vector<int> &arr)
{
    int start = 0, end = arr.size() - 1;
    while (start < end)
    {
        int mid = start + ((end - start) / 2);
        if (arr[mid] > arr[mid + 1])
        {
            end = mid;
        }

        else
        {
            start = mid + 1;
        }
    }
    return start;
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << peakIndexInMountainArray(arr) << endl;

    return 0;
}