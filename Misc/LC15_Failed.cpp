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

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            for (int k = j + 1; k < size; k++)
            {
                if (nums[i] + nums[j] + nums[k] == 0)
                {
                    vector<int> arr = {nums[i], nums[j], nums[k]};
                    sort(arr.begin(), arr.end());
                    if (find(ans.begin(), ans.end(), arr) == ans.end())
                        ans.push_back(arr);
                }
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

    for(int i = 0; i < ans.size(); i++)
    {
        for(int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
    }

    return 0;
}