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

bool possible(int k, int h, vector<int> &piles)
{
    int hours = 0;

    for (int i = 0; i < piles.size(); i++)
    {
        hours += (piles[i] + k - 1) / k;
    }

    return hours <= h;
}

int minEatingSpeed(vector<int> &piles, int h)
{
    int start = 1;
    int ans;
    int end = *max_element(piles.begin(), piles.end());

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (possible(mid, h, piles))
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
    int n;
    cin >> n;

    vector<int> piles(n);

    for (int i = 0; i < n; i++)
    {
        cin >> piles[i];
    }

    int h;
    cin >> h;

    cout << minEatingSpeed(piles, h);

    return 0;
}