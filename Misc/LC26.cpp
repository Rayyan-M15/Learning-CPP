#include <iostream>
using namespace std;

int removeDuplicates(vector<int> &nums)
{
    if (nums.empty())
    {
        return 0;
    }

    int j = 0;

    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] != nums[j])
        {
            j++;
            nums[j] = nums[i];
        }
    }

    return j + 1;
}

int main()
{
    int n;
    cin >> n;

    vector<int> nums(n);

    for(int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int k = removeDuplicates(nums);

    cout << k << endl;

    for(int i = 0; i < k; i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}