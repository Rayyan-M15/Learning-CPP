#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <deque>
#include <numeric>
#include <cmath>
#include <climits>
using namespace std;

int threeSumClosest(vector<int> &nums, int target)
{
    sort(nums.begin(), nums.end());
    int n = nums.size();

    int ans = nums[0] + nums[1] + nums[2];
    for (int i = 0; i < n; i++)
    {
        int left = i + 1;
        int right = n - 1;

        while (left < right)
        {
            int sum = nums[i] + nums[left] + nums[right];

            if (abs(sum - target) < abs(ans - target))
            {
                ans = sum;
            }

            if (sum < target)
            {
                left++;
            }

            else if (sum > target)
            {
                right--;
            }

            else
            {
                return sum;
            }
        }
    }

    return ans;
}

int main()
{
    vector<int> nums = {-1, 2, 1, -4};
    int target = 1;

    cout << threeSumClosest(nums, target)<<endl;

    return 0;
}