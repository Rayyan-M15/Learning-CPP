#include <iostream>
using namespace std;

int firstocc(vector<int> &nums, int target)
{
    int start = 0;
    int end = nums.size() - 1;
    int ans = -1;

    while (start <= end)
    {
        int mid = start + ((end - start) / 2);

        if (nums[mid] == target)
        {
            ans = mid;
            end = mid - 1;
        }

        else if (nums[mid] < target)
        {
            start = mid + 1;
        }

        else if (nums[mid] > target)
        {
            end = mid - 1;
        }
    }

    return ans;
}
int lastocc(vector<int> &nums, int target)
{
    int start = 0;
    int end = nums.size() - 1;
    int ans = -1;

    while (start <= end)
    {
        int mid = start + ((end - start) / 2);

        if (nums[mid] == target)
        {
            ans = mid;
            start = mid + 1;
        }

        else if (nums[mid] < target)
        {
            start = mid + 1;
        }

        else if (nums[mid] > target)
        {
            end = mid - 1;
        }
    }

    return ans;
}
vector<int> searchRange(vector<int> &nums, int target)
{

    return {firstocc(nums, target), lastocc(nums, target)};
}


int main()
{
    vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target = 8;

    vector<int> ans = searchRange(nums, target);

    cout << ans[0] << " " << ans[1] << endl;

    return 0;
}