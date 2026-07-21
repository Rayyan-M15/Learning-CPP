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

int findNumbers(vector<int> &nums)
{
    int ans = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        int digit = 0;
        while (nums[i] != 0)
        {
            digit++;
            nums[i] /= 10;
        }

        if (digit % 2 == 0)
        {
            ans++;
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

    cout << findNumbers(nums);

    return 0;
}