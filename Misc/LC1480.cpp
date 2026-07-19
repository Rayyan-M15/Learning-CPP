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

vector<int> runningSum(vector<int> &nums)
{
    vector<int> ans;

    for (int i = 0; i < nums.size(); i++)
    {
        int sum = 0;
        for (int j = 0; j <= i; j++)
        {
            sum += nums[j];
        }

        ans.push_back(sum);
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

    vector<int> ans = runningSum(nums);

    for(int x : ans)
    {
        cout << x << " ";
    }

    return 0;
}