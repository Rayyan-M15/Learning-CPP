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

vector<int> shuffle(vector<int> &nums, int n)
{

    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        ans.push_back(nums[i]);
        ans.push_back(nums[n + i]);
    }

    return ans;
}

int main()
{
    vector<int> nums = {2,5,1,3,4,7};
    int n = 3;

    vector<int> ans = shuffle(nums, n);

    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i] << " ";
    }
    
    return 0;
}