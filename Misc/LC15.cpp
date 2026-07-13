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

vector<vector<int>> threeSum(vector<int> &nums)
{
    int size = nums.size();

    vector<vector<int>> ans;

    sort(nums.begin(), nums.end());

    for (int i = 0; i < size; i++)
    {
        if (i > 0 && nums[i] == nums[i - 1])
        {
            continue;
        }

        int left = i + 1;
        int right = size - 1;

        while (left < right)
        {
            vector<int> triplet;
            int sum = nums[i] + nums[left] + nums[right];

            if (sum < 0)
            {
                left++;
            }

            else if (sum > 0)
            {
                right--;
            }

            else if (sum == 0)
            {
                triplet.push_back(nums[i]);
                triplet.push_back(nums[left]);
                triplet.push_back(nums[right]);

                ans.push_back(triplet);

                left++;
                right--;

                while (left < right && nums[left] == nums[left - 1])
                    left++;

                while (left < right && nums[right] == nums[right + 1])
                    right--;
            }
        }
    }

    return ans;
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

    vector<vector<int>> ans = threeSum(nums);

    if(ans.empty())
    {
        cout << "No triplets found";
        return 0;
    }

    for(const auto &triplet : ans)
    {
        for(int x : triplet)
        {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}