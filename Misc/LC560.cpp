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

int subarraySum(vector<int> &nums, int k)
{
    int size = nums.size();
    int ans = 0;

    for (int i = 0; i < size; i++)
    {
        int sum = 0;

        for (int j = i; j < size; j++)
        {
            sum += nums[j];

            if (sum == k)
            {
                ans++;
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

    int k;
    cin >> k;

    cout << subarraySum(nums, k) << endl;

    return 0;
}