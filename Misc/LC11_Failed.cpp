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

    for (int i = 0; i < size; i++)
    {
        for (int j = size - 1; j > i; j--)
        {
            int width = j - i;
            int length = min(height[i], height[j]);
            if (width * length > ans)
            {
                ans = width * length;
            }
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