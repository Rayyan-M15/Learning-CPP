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

bool possible(int mid, int days, vector<int> &weights)
{
    int currentload = 0;
    int daysused = 1;

    for (int i = 0; i < weights.size(); i++)
    {
        if (currentload + weights[i] <= mid)
        {
            currentload += weights[i];
        }
        else
        {
            currentload = weights[i];
            daysused++;
        }
    }

    return daysused <= days;
}

int shipWithinDays(vector<int> &weights, int days)
{
    int ans;
    int start = *max_element(weights.begin(), weights.end());
    int end = accumulate(weights.begin(), weights.end(), 0);

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (possible(mid, days, weights))
        {
            ans = mid;
            end = mid - 1;
        }

        else
        {
            start = mid + 1;
        }
    }

    return ans;
}

int main()
{
    vector<int> weights = {1,2,3,4,5,6,7,8,9,10};
    int days = 5;

    cout << shipWithinDays(weights, days);

    return 0;
}