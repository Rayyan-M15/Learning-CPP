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

int maxArea(vector<int> &height)
{
    int ans = 0;
    int size = height.size();

    int left = 0;
    int right = size - 1;

    while (left < right)
    {
        int area = (right - left) * min(height[left], height[right]);

        ans = max(ans, area);

        if (height[left] < height[right])
        {
            left++;
        }
        else
        {
            right--;
        }
    }

    return ans;
}

int main()
{
    int n;
    cin >> n;

    vector<int> height(n);

    for(int i = 0; i < n; i++)
    {
        cin >> height[i];
    }

    cout << maxArea(height) << endl;

    return 0;
}